#include <iconfontcppheaders/IconsFontAwesome4.h>

#undef NDEBUG
#include <cassert>

int main ()
{
  assert (ICON_FA_GLASS != nullptr);
  assert (ICON_MIN_FA <= ICON_MAX_16_FA);
  assert (FONT_ICON_FILE_NAME_FA != nullptr);
}
