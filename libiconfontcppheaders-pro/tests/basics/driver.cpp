#include <iconfontcppheaders/IconsFontAwesome5Pro.h>
#include <iconfontcppheaders/IconsFontAwesome5ProBrands.h>

#undef NDEBUG
#include <cassert>

int main ()
{
  assert (ICON_FA_ABACUS != nullptr);
  assert (ICON_FA_500PX != nullptr);
  assert (ICON_MIN_FA <= ICON_MAX_16_FA);
  assert (ICON_MIN_FAB <= ICON_MAX_16_FAB);
  assert (FONT_ICON_FILE_NAME_FAL != nullptr);
}
