#include <iconfontcppheaders/IconsFontAwesome5.h>
#include <iconfontcppheaders/IconsFontAwesome5Brands.h>

#undef NDEBUG
#include <cassert>

int main ()
{
  assert (ICON_FA_AD != nullptr);
  assert (ICON_FA_500PX != nullptr);
  assert (ICON_MIN_FA <= ICON_MAX_16_FA);
  assert (ICON_MIN_FAB <= ICON_MAX_16_FAB);
}
