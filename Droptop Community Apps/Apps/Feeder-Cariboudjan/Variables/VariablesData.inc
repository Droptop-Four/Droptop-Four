[Variables]

FeederID1=Lifehacker
FeederSource1=Lifehacker
FeederURL1=https://lifehacker.com/rss
FeederSubstitute1="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","#CRLF#":"","\r\n":"","    ":"","<br>":"","<em>":"","</em>":"","":"No description"
FeederRegExp1=(?siU)</title>.*<title>(.*)</title>.*<link>(.*)</link>.* src="(.*)".*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.* src="(.*)".*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.* src="(.*)".*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.* src="(.*)".*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.* src="(.*)".*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.* src="(.*)".*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.* src="(.*)".*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.* src="(.*)".*<p>(.*)</p>.*<pubDate>(.*)</pubDate>

;--------------------------

FeederID2=CBS
FeederSource2=CBS News
FeederURL2=https://www.cbsnews.com/latest/rss/main
FeederSubstitute2="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","&#039;":"[\x0027]","&quot;":"[\x0022]","#CRLF#":"","\r\n":"","    ":"","":"No description"
FeederRegExp2=(?siU)<title>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<image>(.*)</image>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<image>(.*)</image>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<image>(.*)</image>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<image>(.*)</image>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<image>(.*)</image>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<image>(.*)</image>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<image>(.*)</image>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<image>(.*)</image>

;--------------------------

FeederID3=LATimes
FeederSource3=Los Angeles Times
FeederURL3=https://www.latimes.com/local/rss2.0.xml
FeederSubstitute3="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","&#x27;":"[\x0027]","&quot;":"[\x0022]","#CRLF#":"","\r\n":"","    ":"","":"No description"
FeederRegExp3=(?siU)<title>.*<title>(.*)</title>.*<pubDate>(.*)</pubDate>.*<link>(.*)</link>.*<p>(.*)</p>.*<media:content url="(.*)".*<title>(.*)</title>.*<pubDate>(.*)</pubDate>.*<link>(.*)</link>.*<p>(.*)</p>.*<media:content url="(.*)".*<title>(.*)</title>.*<pubDate>(.*)</pubDate>.*<link>(.*)</link>.*<p>(.*)</p>.*<media:content url="(.*)".*<title>(.*)</title>.*<pubDate>(.*)</pubDate>.*<link>(.*)</link>.*<p>(.*)</p>.*<media:content url="(.*)".*<title>(.*)</title>.*<pubDate>(.*)</pubDate>.*<link>(.*)</link>.*<p>(.*)</p>.*<media:content url="(.*)".*<title>(.*)</title>.*<pubDate>(.*)</pubDate>.*<link>(.*)</link>.*<p>(.*)</p>.*<media:content url="(.*)".*<title>(.*)</title>.*<pubDate>(.*)</pubDate>.*<link>(.*)</link>.*<p>(.*)</p>.*<media:content url="(.*)".*<title>(.*)</title>.*<pubDate>(.*)</pubDate>.*<link>(.*)</link>.*<p>(.*)</p>.*<media:content url="(.*)"

;--------------------------

FeederID4=CNN
FeederSource4=CNN Top Stories
FeederURL4=http://rss.cnn.com/rss/cnn_topstories.rss
FeederSubstitute4="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","#CRLF#":"","\r\n":"","    ":"","<img src.*title='":"","' height.*":"","&#39;":"[\x0027]","":"No description"
FeederRegExp4=(?siU)<title>.*<title>.*<title>.*<title>(.*)</title>.*<description>(.*)</description>.*<link>(.*)</link>.*<pubDate>(.*)</pubDate>.*url=".*url=".*url=".*url="(.*)" height="480" width="640" type="image/jpeg"/>.*<title>.*<title>.*<title>.*<title>(.*)</title>.*<description>(.*)</description>.*<link>(.*)</link>.*<pubDate>(.*)</pubDate>.*url=".*url=".*url=".*url="(.*)" height="480" width="640" type="image/jpeg"/>.*<title>.*<title>.*<title>.*<title>(.*)</title>.*<description>(.*)</description>.*<link>(.*)</link>.*<pubDate>(.*)</pubDate>.*url=".*url=".*url=".*url="(.*)" height="480" width="640" type="image/jpeg"/>.*<title>.*<title>.*<title>.*<title>(.*)</title>.*<description>(.*)</description>.*<link>(.*)</link>.*<pubDate>(.*)</pubDate>.*url=".*url=".*url=".*url="(.*)" height="480" width="640" type="image/jpeg"/>.*<title>.*<title>.*<title>.*<title>(.*)</title>.*<description>(.*)</description>.*<link>(.*)</link>.*<pubDate>(.*)</pubDate>.*url=".*url=".*url=".*url="(.*)" height="480" width="640" type="image/jpeg"/>.*<title>.*<title>.*<title>.*<title>(.*)</title>.*<description>(.*)</description>.*<link>(.*)</link>.*<pubDate>(.*)</pubDate>.*url=".*url=".*url=".*url="(.*)" height="480" width="640" type="image/jpeg"/>.*<title>.*<title>.*<title>.*<title>(.*)</title>.*<description>(.*)</description>.*<link>(.*)</link>.*<pubDate>(.*)</pubDate>.*url=".*url=".*url=".*url="(.*)" height="480" width="640" type="image/jpeg"/>.*<title>.*<title>.*<title>.*<title>(.*)</title>.*<description>(.*)</description>.*<link>(.*)</link>.*<pubDate>(.*)</pubDate>.*url=".*url=".*url=".*url="(.*)" height="480" width="640" type="image/jpeg"/>

;--------------------------

FeederID5=ArsTechnica
FeederSource5=Ars Technica
FeederURL5=https://feeds.arstechnica.com/arstechnica/index
FeederSubstitute5="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","<em>":"","</em>":"","#CRLF#":"","\r\n":"","    ":"","":"No description"
FeederRegExp5=(?siU)</title>.*<title>.*<title>(.*)</title>.*<link>(.*)</link>.*<img src="(.*)".*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<img src="(.*)".*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<img src="(.*)".*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<img src="(.*)".*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<img src="(.*)".*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<img src="(.*)".*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<img src="(.*)".*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<img src="(.*)".*<p>(.*)</p>.*<pubDate>(.*)</pubDate>

;--------------------------

FeederID6=NYT
FeederSource6=New York Times
FeederURL6=https://rss.nytimes.com/services/xml/rss/nyt/HomePage.xml
FeederSubstitute6="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","#CRLF#":"","\r\n":"","    ":"","&gt;":">","":"No description"
FeederRegExp6=(?siU)</title>.*<title>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*"image" url="(.*)" width=".*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*"image" url="(.*)" width=".*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*"image" url="(.*)" width=".*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*"image" url="(.*)" width=".*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*"image" url="(.*)" width=".*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*"image" url="(.*)" width=".*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*"image" url="(.*)" width=".*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*"image" url="(.*)" width="

;--------------------------

FeederID7=UNNews
FeederSource7=UN News
FeederURL7=https://news.un.org/feed/subscribe/en/news/all/rss.xml
FeederSubstitute7="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","#CRLF#":"","\r\n":"","    ":"","<p>.*400":"","</span></p>":"",";.*>":"","^\. ":"","<p>":"","^, ":"","":"No description"
FeederRegExp7=(?siU)</title>.*<title>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<enclosure url="(.*)" length=".*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<enclosure url="(.*)" length=".*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<enclosure url="(.*)" length=".*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<enclosure url="(.*)" length=".*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<enclosure url="(.*)" length=".*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<enclosure url="(.*)" length=".*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<enclosure url="(.*)" length=".*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<enclosure url="(.*)" length=".*<pubDate>(.*)</pubDate>

; -------------------------------------------------
; FeederID1
; -------------------------------------------------

FeederIndex1.1.Title=1
FeederIndex1.1.Link=2
FeederIndex1.1.Date=5
FeederIndex1.1.Dec=4
FeederIndex1.1.Img=3

FeederIndex1.2.Title=6
FeederIndex1.2.Link=7
FeederIndex1.2.Date=10
FeederIndex1.2.Dec=9
FeederIndex1.2.Img=8

FeederIndex1.3.Title=11
FeederIndex1.3.Link=12
FeederIndex1.3.Date=15
FeederIndex1.3.Dec=14
FeederIndex1.3.Img=13

FeederIndex1.4.Title=16
FeederIndex1.4.Link=17
FeederIndex1.4.Date=20
FeederIndex1.4.Dec=19
FeederIndex1.4.Img=18

FeederIndex1.5.Title=21
FeederIndex1.5.Link=22
FeederIndex1.5.Date=25
FeederIndex1.5.Dec=24
FeederIndex1.5.Img=23

FeederIndex1.6.Title=26
FeederIndex1.6.Link=27
FeederIndex1.6.Date=30
FeederIndex1.6.Dec=29
FeederIndex1.6.Img=28

FeederIndex1.7.Title=31
FeederIndex1.7.Link=32
FeederIndex1.7.Date=35
FeederIndex1.7.Dec=34
FeederIndex1.7.Img=33

FeederIndex1.8.Title=36
FeederIndex1.8.Link=37
FeederIndex1.8.Date=40
FeederIndex1.8.Dec=39
FeederIndex1.8.Img=38

; -------------------------------------------------
; FeederID2
; -------------------------------------------------

FeederIndex2.1.Title=1
FeederIndex2.1.Link=2
FeederIndex2.1.Date=4
FeederIndex2.1.Dec=3
FeederIndex2.1.Img=5

FeederIndex2.2.Title=6
FeederIndex2.2.Link=7
FeederIndex2.2.Date=9
FeederIndex2.2.Dec=8
FeederIndex2.2.Img=10

FeederIndex2.3.Title=11
FeederIndex2.3.Link=12
FeederIndex2.3.Date=14
FeederIndex2.3.Dec=13
FeederIndex2.3.Img=15

FeederIndex2.4.Title=16
FeederIndex2.4.Link=17
FeederIndex2.4.Date=19
FeederIndex2.4.Dec=18
FeederIndex2.4.Img=20

FeederIndex2.5.Title=21
FeederIndex2.5.Link=22
FeederIndex2.5.Date=24
FeederIndex2.5.Dec=23
FeederIndex2.5.Img=25

FeederIndex2.6.Title=26
FeederIndex2.6.Link=27
FeederIndex2.6.Date=29
FeederIndex2.6.Dec=28
FeederIndex2.6.Img=30

FeederIndex2.7.Title=31
FeederIndex2.7.Link=32
FeederIndex2.7.Date=34
FeederIndex2.7.Dec=33
FeederIndex2.7.Img=35

FeederIndex2.8.Title=36
FeederIndex2.8.Link=37
FeederIndex2.8.Date=39
FeederIndex2.8.Dec=38
FeederIndex2.8.Img=40

; -------------------------------------------------
; FeederID3
; -------------------------------------------------

FeederIndex3.1.Title=1
FeederIndex3.1.Link=3
FeederIndex3.1.Date=2
FeederIndex3.1.Dec=4
FeederIndex3.1.Img=5

FeederIndex3.2.Title=6
FeederIndex3.2.Link=8
FeederIndex3.2.Date=7
FeederIndex3.2.Dec=9
FeederIndex3.2.Img=10

FeederIndex3.3.Title=11
FeederIndex3.3.Link=13
FeederIndex3.3.Date=12
FeederIndex3.3.Dec=14
FeederIndex3.3.Img=15

FeederIndex3.4.Title=16
FeederIndex3.4.Link=18
FeederIndex3.4.Date=17
FeederIndex3.4.Dec=19
FeederIndex3.4.Img=20

FeederIndex3.5.Title=21
FeederIndex3.5.Link=23
FeederIndex3.5.Date=22
FeederIndex3.5.Dec=24
FeederIndex3.5.Img=25

FeederIndex3.6.Title=26
FeederIndex3.6.Link=28
FeederIndex3.6.Date=27
FeederIndex3.6.Dec=29
FeederIndex3.6.Img=30

FeederIndex3.7.Title=31
FeederIndex3.7.Link=33
FeederIndex3.7.Date=32
FeederIndex3.7.Dec=34
FeederIndex3.7.Img=35

FeederIndex3.8.Title=36
FeederIndex3.8.Link=38
FeederIndex3.8.Date=37
FeederIndex3.8.Dec=39
FeederIndex3.8.Img=40

; -------------------------------------------------
; FeederID4
; -------------------------------------------------

FeederIndex4.1.Title=1
FeederIndex4.1.Link=3
FeederIndex4.1.Date=4
FeederIndex4.1.Dec=2
FeederIndex4.1.Img=5

FeederIndex4.2.Title=6
FeederIndex4.2.Link=8
FeederIndex4.2.Date=9
FeederIndex4.2.Dec=7
FeederIndex4.2.Img=10

FeederIndex4.3.Title=11
FeederIndex4.3.Link=13
FeederIndex4.3.Date=14
FeederIndex4.3.Dec=12
FeederIndex4.3.Img=15

FeederIndex4.4.Title=16
FeederIndex4.4.Link=18
FeederIndex4.4.Date=19
FeederIndex4.4.Dec=17
FeederIndex4.4.Img=20

FeederIndex4.5.Title=21
FeederIndex4.5.Link=23
FeederIndex4.5.Date=24
FeederIndex4.5.Dec=22
FeederIndex4.5.Img=25

FeederIndex4.6.Title=26
FeederIndex4.6.Link=28
FeederIndex4.6.Date=29
FeederIndex4.6.Dec=27
FeederIndex4.6.Img=30

FeederIndex4.7.Title=31
FeederIndex4.7.Link=33
FeederIndex4.7.Date=34
FeederIndex4.7.Dec=32
FeederIndex4.7.Img=35

FeederIndex4.8.Title=36
FeederIndex4.8.Link=38
FeederIndex4.8.Date=39
FeederIndex4.8.Dec=37
FeederIndex4.8.Img=40

; -------------------------------------------------
; FeederID5
; -------------------------------------------------

FeederIndex5.1.Title=1
FeederIndex5.1.Link=2
FeederIndex5.1.Date=5
FeederIndex5.1.Dec=4
FeederIndex5.1.Img=3

FeederIndex5.2.Title=6
FeederIndex5.2.Link=7
FeederIndex5.2.Date=10
FeederIndex5.2.Dec=9
FeederIndex5.2.Img=8

FeederIndex5.3.Title=11
FeederIndex5.3.Link=12
FeederIndex5.3.Date=15
FeederIndex5.3.Dec=14
FeederIndex5.3.Img=13

FeederIndex5.4.Title=16
FeederIndex5.4.Link=17
FeederIndex5.4.Date=20
FeederIndex5.4.Dec=19
FeederIndex5.4.Img=18

FeederIndex5.5.Title=21
FeederIndex5.5.Link=22
FeederIndex5.5.Date=25
FeederIndex5.5.Dec=24
FeederIndex5.5.Img=23

FeederIndex5.6.Title=26
FeederIndex5.6.Link=27
FeederIndex5.6.Date=30
FeederIndex5.6.Dec=29
FeederIndex5.6.Img=28

FeederIndex5.7.Title=31
FeederIndex5.7.Link=32
FeederIndex5.7.Date=35
FeederIndex5.7.Dec=34
FeederIndex5.7.Img=33

FeederIndex5.8.Title=36
FeederIndex5.8.Link=37
FeederIndex5.8.Date=40
FeederIndex5.8.Dec=39
FeederIndex5.8.Img=38

; -------------------------------------------------
; FeederID6
; -------------------------------------------------

FeederIndex6.1.Title=1
FeederIndex6.1.Link=2
FeederIndex6.1.Date=4
FeederIndex6.1.Dec=3
FeederIndex6.1.Img=5

FeederIndex6.2.Title=6
FeederIndex6.2.Link=7
FeederIndex6.2.Date=9
FeederIndex6.2.Dec=8
FeederIndex6.2.Img=10

FeederIndex6.3.Title=11
FeederIndex6.3.Link=12
FeederIndex6.3.Date=14
FeederIndex6.3.Dec=13
FeederIndex6.3.Img=15

FeederIndex6.4.Title=16
FeederIndex6.4.Link=17
FeederIndex6.4.Date=19
FeederIndex6.4.Dec=18
FeederIndex6.4.Img=20

FeederIndex6.5.Title=21
FeederIndex6.5.Link=22
FeederIndex6.5.Date=24
FeederIndex6.5.Dec=23
FeederIndex6.5.Img=25

FeederIndex6.6.Title=26
FeederIndex6.6.Link=27
FeederIndex6.6.Date=29
FeederIndex6.6.Dec=28
FeederIndex6.6.Img=30

FeederIndex6.7.Title=31
FeederIndex6.7.Link=32
FeederIndex6.7.Date=34
FeederIndex6.7.Dec=33
FeederIndex6.7.Img=35

FeederIndex6.8.Title=36
FeederIndex6.8.Link=37
FeederIndex6.8.Date=39
FeederIndex6.8.Dec=38
FeederIndex6.8.Img=40

; -------------------------------------------------
; FeederID7
; -------------------------------------------------

FeederIndex7.1.Title=1
FeederIndex7.1.Link=2
FeederIndex7.1.Date=5
FeederIndex7.1.Dec=3
FeederIndex7.1.Img=4

FeederIndex7.2.Title=6
FeederIndex7.2.Link=7
FeederIndex7.2.Date=10
FeederIndex7.2.Dec=8
FeederIndex7.2.Img=9

FeederIndex7.3.Title=11
FeederIndex7.3.Link=12
FeederIndex7.3.Date=15
FeederIndex7.3.Dec=13
FeederIndex7.3.Img=14

FeederIndex7.4.Title=16
FeederIndex7.4.Link=17
FeederIndex7.4.Date=20
FeederIndex7.4.Dec=18
FeederIndex7.4.Img=19

FeederIndex7.5.Title=21
FeederIndex7.5.Link=22
FeederIndex7.5.Date=25
FeederIndex7.5.Dec=23
FeederIndex7.5.Img=24

FeederIndex7.6.Title=26
FeederIndex7.6.Link=27
FeederIndex7.6.Date=30
FeederIndex7.6.Dec=28
FeederIndex7.6.Img=29

FeederIndex7.7.Title=31
FeederIndex7.7.Link=32
FeederIndex7.7.Date=35
FeederIndex7.7.Dec=33
FeederIndex7.7.Img=34

FeederIndex7.8.Title=36
FeederIndex7.8.Link=37
FeederIndex7.8.Date=40
FeederIndex7.8.Dec=38
FeederIndex7.8.Img=39