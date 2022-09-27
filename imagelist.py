import os

dir_path = './assets/gallery/'

# list to store files
res = []

# Iterate directory
for path in os.listdir(dir_path):
    # check if current path is a file
    if os.path.isfile(os.path.join(dir_path, path)):
        res.append(path)


with open("out.txt", "w") as f:
    for img in res:
        f.write("<img data-src=\""+dir_path[1:]+img+"\" class=\"lazyload act_image\" />\n")





# "<img src=\""+dir_path[1:]+img+"\" alt=\""+img[:-4]+"\" loading=\"lazy\">"
# "\t<div class=\"mySlides fade\">\n\t\t<img src=\""+dir_path[1:]+img+"\" alt=\""+img[:-4]+">\n\t</div>"
