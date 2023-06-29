import Toybox.View;
import Toybox.View as Alias;

class Watch {
  static const VARIABLE = 0;
  static const VA_RI_ABLE = false;

  // some comment about this variable
  hidden var _hiddenString = "Hidden";

  public function emptyFunction(num as Number, str as String) {
    if (10 < 9) {
      return 1;
    } else {
      return 30;
    }
  }

  public function initialize(parameter) {
    return "hi";
  }

  private function calculate(num as Number) {
    return num + 10;
  }
}
