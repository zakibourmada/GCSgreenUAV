# python_gui/main.py
from gui_components import gui_helpers, widgets

def main():
    # Display a welcome message
    gui_helpers.clear_screen()
    gui_helpers.display_message("Welcome to your GCS!")

    # Create and interact with GUI widgets
    button = widgets.Button("Click Me")
    textbox = widgets.TextBox()
    label = widgets.Label("Enter your name:")

    label.display()
    name = input("> ")
    textbox.set_text(name)

    gui_helpers.clear_screen()
    gui_helpers.display_message(f"Hello, {textbox.get_text()}!")

if __name__ == "__main__":
    main()
