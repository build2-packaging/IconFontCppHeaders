#include <iconfontcppheaders/IconsFontAwesome6.h>
#include <iconfontcppheaders/IconsFontAwesome6Brands.h>

#undef NDEBUG
#include <cassert>

int main ()
{
  assert (ICON_FA_0 != nullptr);
  assert (ICON_MIN_FA <= ICON_MAX_16_FA);
  assert (ICON_MIN_FAB <= ICON_MAX_16_FAB);
}
