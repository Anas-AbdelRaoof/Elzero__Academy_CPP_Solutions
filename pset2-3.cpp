/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ Not Valid ] => Reason ? You can't write a number at the start.
  __name      [ Valid | Bad Practice ] => Reason ? It is not good to put underscore _ at the start.
  name@name   [ Not Valid ] => Reason ? You can't put special signs.
  name10name  [ Valid | Bad Practice ] => Reason ? You can make it first_name instead of this.
  name!name   [ Not Valid ] => Reason ? You can't put special signs.
  first_NAME  [ Valid | Bad Practice ] => Reason ? You can make firstName as Camel Case instead of this.
  first_name  [ Valid | Good Practice ] => Reason ? It is the Snake case/method.
  firstName   [ Valid | Good Practice ] => Reason ? It is Camel Case.
  first name  [ Not Valid ] => Reason ? You can't put space ( ).
  fn          [ Valid | Bad Practice ] => Reason ? Meaningless
  public      [ Not Valid ] => Reason ? Key word in C++.
  Public      [ Valid | Bad Practice ] => Reason ? It is like the key word "public" in C++.
*/
