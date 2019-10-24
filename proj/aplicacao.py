from flask import Flask, render_template

app = Flask (__name__)

@app.route('/index')

def index():
    return render_template("index.html")

@app.route('/inovacao')

def vestibular():
    return render_template("inovacao.html")


app.run()
