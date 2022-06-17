modded class LoadingScreen
{
	ref TStringArray MyLoadingScreenArray = {
		"My_loading_screenshow\\images\\loadingscreen_namalsk_01.edds",
		"My_loading_screenshow\\images\\loadingscreen_namalsk_02.edds",
		"My_loading_screenshow\\images\\loadingscreen_namalsk_03.edds"};

	override void Show()
	{		
		string preel = MyLoadingScreenArray.GetRandomElement();
		m_ImageWidgetBackground.LoadMaskTexture("My_loading_screenshow/data/ls_mask.paa");
		m_ImageWidgetBackground.LoadImageFile(0, preel);
		m_ImageLogoMid.Show(false);
		m_ImageLogoCorner.Show(false);
		m_ModdedWarning.Show(false); // Show / Hide - Modded version warning // 1.17 OK
		super.Show();
	}
}

modded class LoginTimeBase extends UIScriptedMenu
{
	ref TStringArray MyLoadingScreenArray = {
		"My_loading_screenshow\\images\\loadingscreen_namalsk_01.edds",
		"My_loading_screenshow\\images\\loadingscreen_namalsk_02.edds",
		"My_loading_screenshow\\images\\loadingscreen_namalsk_03.edds"};

	override void Show()
	{
		super.Show();
		if (layoutRoot)
		{
			string preel = MyLoadingScreenArray.GetRandomElement();
			ImageWidget background = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background"));
			background.LoadImageFile(0, preel);  
		}
	}
}

modded class LoginQueueBase extends UIScriptedMenu
{
	ref TStringArray MyLoadingScreenArray = {
		"My_loading_screenshow\\images\\loadingscreen_namalsk_01.edds",
		"My_loading_screenshow\\images\\loadingscreen_namalsk_02.edds",
		"My_loading_screenshow\\images\\loadingscreen_namalsk_03.edds"};

	override void Show()
	{
		super.Show();
		if (layoutRoot)
		{
			string preel = LoadingScreenArray.GetRandomElement();
			ImageWidget background = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background"));
			background.LoadImageFile(0, preel);  
		}
	}
}
