from flask import Flask, render_template
import os


def installer():
    print("Creating directories and files .....")

    os.mkdir("templates")

    file = open("templates/index.html", "w")
    file.write("\n<!DOCTYPE html>")
    file.write("\n<html>")
    file.write("\n<head>")
    file.write("\n  <meta charset='utf-8'")
    file.write("\n  <title>Site!</title>")
    file.write("\n  <link rel='stylesheet' href='style.css'")
    file.write("\n>/head>")
    file.write("\n<body>")
    file.write("\n  <p>Welcome Site!</p>")
    file.write("\n</body>")
    file.write("\n<script src='script.js'></script>")
    file.write("\n</html>")

    file2 = open("templates/style.css", "w")
    file2.write("\n * {")
    file2.write("\n     background: whitesmoke")
    file2.write("\n     color: black")
    file2.write("\n     font-family: sans-serif")
    file2.write("}")

    file3 = open("templates/script.js", "w")
    file3.write("\n console.log('Hello World!')")

def webserver():
    app = Flask(__name__)

    @app.route("/")
    def open_html():
        return render_template("index.html")


def main():
    print("Open localhost 8000 in / route\n")
    app.run(debug=True)


if __name__ == "__main__":
    main()