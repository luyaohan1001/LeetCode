
class parent:
  def __init__(self):
    print("parent constructor")

class child(parent):
  def __init__(self):
    print("child constructor")



if __name__ == "__main__":
  p = parent()
  c = child()
  print("hello world")