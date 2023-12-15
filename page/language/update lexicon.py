import os
with open("lex.txt", "r") as f:
    text = f.read()
    text = text.encode("utf-8")
    print(text)
with open("lexicon.html", "w", encoding="utf-8") as f:
    f.write(str("""<!-- main -->
<!DOCTYPE html 
	PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
	"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="https://www.w3.org/1999/xhtml">
	<head>
		<link rel="stylesheet" href=../style.css>
		<title>
			Lexicon
		</title>
	</head>
	
	<body>
		<div class=maintitle>
			<br>
			<b>Lexicon</b>
			<br>
			⠀
			<!-- empty character above! -->
		</div>
		
		<br>
		
		<div class=linkstyle>
			⠀⠀⠀⠀⠀⠀⠀
			<a href=index.html>GO BACK</a>
		</div>
		
		<textblock>""" + text.decode("utf-8").replace("\n", "<br>") + """</textblock>
	
	</body>
</html>"""))