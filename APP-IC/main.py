from kivy.app import App
from kivy.lang import Builder

GUI = Builder.load_file("interface.kv")

class Aplicativo(App):
    def build(self):
        return GUI