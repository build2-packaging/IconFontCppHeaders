#include <iconfontcppheaders/IconsFontAwesome7.h>
#include <iconfontcppheaders/IconsFontAwesome7Brands.h>
#include <iconfontcppheaders/IconsForkAwesome.h>
#include <iconfontcppheaders/IconsMaterialDesign.h>
#include <iconfontcppheaders/IconsMaterialSymbols.h>
#include <iconfontcppheaders/IconsMaterialDesignIcons.h>
#include <iconfontcppheaders/IconsKenney.h>
#include <iconfontcppheaders/IconsFontaudio.h>
#include <iconfontcppheaders/IconsCodicons.h>
#include <iconfontcppheaders/IconsLucide.h>

#undef NDEBUG
#include <cassert>

int main ()
{
  assert (ICON_FA_0 != nullptr);
  assert (ICON_FA_42_GROUP != nullptr);
  assert (ICON_FK_GLASS != nullptr);
  assert (ICON_MD_10K != nullptr);
  assert (ICON_MS_10K != nullptr);
  assert (ICON_MDI_AB_TESTING != nullptr);
  assert (ICON_KI_HOME != nullptr);
  assert (ICON_FAD_ADR != nullptr);
  assert (ICON_CI_ADD != nullptr);
  assert (ICON_LC_A_ARROW_DOWN != nullptr);

  assert (ICON_MIN_FA <= ICON_MAX_16_FA);
  assert (ICON_MIN_FAB <= ICON_MAX_16_FAB);
  assert (ICON_MIN_FK <= ICON_MAX_16_FK);
  assert (ICON_MIN_MD <= ICON_MAX_16_MD);
  assert (ICON_MIN_MS <= ICON_MAX_16_MS);
  assert (ICON_MIN_MDI <= ICON_MAX_16_MDI);
  assert (ICON_MIN_KI <= ICON_MAX_16_KI);
  assert (ICON_MIN_FAD <= ICON_MAX_16_FAD);
  assert (ICON_MIN_CI <= ICON_MAX_16_CI);
  assert (ICON_MIN_LC <= ICON_MAX_16_LC);

  assert (FONT_ICON_FILE_NAME_FAS != nullptr);
  assert (FONT_ICON_FILE_NAME_KI != nullptr);
}
