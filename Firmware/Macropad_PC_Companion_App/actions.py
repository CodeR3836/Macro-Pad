import webbrowser
import os
import subprocess


def execute(action):

    if action == "youtube":
        webbrowser.open(
            "https://youtube.com"
        )


    elif action == "facebook":
        webbrowser.open(
            "https://facebook.com"
        )


    elif action == "chrome":
        subprocess.Popen(
            "chrome"
        )


    elif action == "gmail":
        webbrowser.open(
            "https://mail.google.com"
        )


    elif action == "github":
        webbrowser.open(
            "https://github.com"
        )


    elif action == "kicad":
        subprocess.Popen(
            "kicad"
        )


    elif action == "vscode":
        subprocess.Popen(
            "code"
        )


    elif action == "fusion360":
        subprocess.Popen(
            "Fusion360"
        )


    elif action == "chatgpt":
        webbrowser.open(
            "https://chat.openai.com"
        )


    elif action == "spotify":
        subprocess.Popen(
            "spotify"
        )


    elif action == "discord":
        subprocess.Popen(
            "discord"
        )


    elif action == "file_manager":
        os.startfile(
            "."
        )


    elif action == "settings":
        subprocess.Popen(
            "start ms-settings:",
            shell=True
        )


    elif action == "pc_info":
        subprocess.Popen(
            "msinfo32"
        )


    elif action == "performance":
        subprocess.Popen(
            "taskmgr"
        )


    elif action == "rgb":

        print(
            "RGB Control"
        )