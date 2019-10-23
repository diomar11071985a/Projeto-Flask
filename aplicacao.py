from flask import Flask, render_template

app = Flask (__name__)

@app.route('https://diomar11071985a.github.io/Projeto-Flask/')

def index():
    return render_template("index.html")

app.run()