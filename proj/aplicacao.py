from flask import Flask, render_template

app = Flask (__name__)

<<<<<<< HEAD
@app.route('/index')

def index():
    return render_template("index.html")

@app.route('/inovacao')

def vestibular():
    return render_template("inovacao.html")


@app.route('/listacursos')

def listcur():
    return render_template("listacursos.html")

app.run()
=======
@app.route('/administracao')

def administracao():
    return render_template("administracao.html")

@app.route('/ads')

def ads():
    return render_template("ads.html")

@app.route('/bancodados')

def bancodados():
    return render_template("bancodados.html")

@app.route('/ciencias')

def ciencias():
    return render_template("ciencias.html")

@app.route('/defesa')

def defesa():
    return render_template("defesa.html")

@app.route('/engenharia')

def engenharia():
    return render_template("engenharia.html")

@app.route('/gestao')

def gestao():
    return render_template("gestao.html")

@app.route('/jogos')

def jogos():
    return render_template("jogos.html")

@app.route('/processos')

def processos():
    return render_template("processos.html")

@app.route('/producao')

def producao():
    return render_template("producao.html")

@app.route('/redes')

def redes():
    return render_template("redes.html")

@app.route('/sistemas')

def sistemas():
    return render_template("sistemas.html")


app.run()
>>>>>>> 73921da00deaf52c46c591e7cf1f6c7e6f6daa65
