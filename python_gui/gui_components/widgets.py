# python_gui/gui_components/widgets.py

class Button:
    def __init__(self, label):
        self.label = label

    def click(self):
        print(f"Button '{self.label}' clicked")

class TextBox:
    def __init__(self):
        self.text = ""

    def set_text(self, text):
        self.text = text

    def get_text(self):
        return self.text

class Label:
    def __init__(self, text):
        self.text = text

    def display(self):
        print(self.text)
