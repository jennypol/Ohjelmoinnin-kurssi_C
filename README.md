# Ohjelmoinnin-kurssi_C


import requests
from bs4 import BeautifulSoup

url = "https://www.example.com"

# Tee GET-pyyntö URL-osoitteeseen
response = requests.get(url)

# Lue vastauksen sisältö ja muunna se BeautifulSoup-objektiksi
soup = BeautifulSoup(response.text, "html.parser")

# Etsi kaikki ankkurielementit (linkit)
link_elements = soup.find_all("a")

# Tulosta kaikkien linkkien URL-osoitteet
for link in link_elements:
    href = link.get("href")
    print(href)




import requests

url = "https://www.example.com"

# Tee GET-pyyntö URL-osoitteeseen
response = requests.get(url)

# Lue vastauksen sisältö
content = response.text

# Määritä etsittävä sana
word = "div"

# Tarkista sanan esiintyminen
if word in content:
    print("URL sisältää sanan 'div'")
else:
    print("URL ei sisällä sanaa 'div'")






import requests
import re

url = "https://www.example.com"

# Tee GET-pyyntö URL-osoitteeseen
response = requests.get(url)

# Lue vastauksen sisältö
content = response.text

# Määritä etsittävä sana
word = "div"

# Etsi sanan esiintymät käyttäen re-moduulia
matches = re.findall(word, content)

if matches:
    print("URL sisältää sanan 'div'")
else:
    print("URL ei sisällä sanaa 'div'")





import requests
from bs4 import BeautifulSoup

url = "https://www.example.com"

# Tee GET-pyyntö URL-osoitteeseen
response = requests.get(url)

# Lue vastauksen sisältö ja muunna se BeautifulSoup-objektiksi
soup = BeautifulSoup(response.text, "html.parser")

# Etsi kaikki div-elementit
div_elements = soup.find_all("div")

# Tarkista, löytyykö haluttu sana jokaisesta div-elementistä
for div in div_elements:
    if "div" in div.text:
        print("URL sisältää sanan 'div'")
        break




