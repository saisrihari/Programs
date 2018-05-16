<?xml version="1.0"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
<body bgcolor= "#40695">
<h2 align="center">My Book Collection</h2>
<table border="1" align="center">
<tr bgcolor="GREY">
<th><font color="white">BOOK_NAME</font></th>
<th><font color="white"></font>Author</th>
<th><font color="white"></font>ISBN</th>
<th><font color="white"></font>Publisher</th>
<th><font color="white"></font>Edition</th>
<th><font color="white"></font>Price</th>
</tr>
<xsl:for-each select="BOOKS/INFORMATION/Book">
<tr>
<td bgcolor= "#26789"><xsl:value-of select="book_name"/></td>
<td bgcolor="black"><b><font color="white"><xsl:value-of select="Author_name"/></font></b></td>
<td bgcolor= "red"><xsl:value-of select="ISBN_number"/></td>
<td bgcolor= "blue"><xsl:value-of select="publisher"/></td>
<td bgcolor= "green"><xsl:value-of select="Edition"/></td>
<td bgcolor= "pink"><xsl:value-of select="Price"/></td>
</tr>
</xsl:for-each>
</table>
</body>
</html>
</xsl:template>
</xsl:stylesheet>
