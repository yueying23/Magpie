#pragma once
#include "AboutPage.g.h"


namespace winrt::Magpie::UI::implementation {

struct AboutPage : AboutPageT<AboutPage> {
	AboutPage();

	void BugReportButton_Click(IInspectable const&, RoutedEventArgs const&);
	void FeatureRequestButton_Click(IInspectable const&, RoutedEventArgs const&);
};

}

namespace winrt::Magpie::UI::factory_implementation {

struct AboutPage : AboutPageT<AboutPage, implementation::AboutPage> {
};

}
