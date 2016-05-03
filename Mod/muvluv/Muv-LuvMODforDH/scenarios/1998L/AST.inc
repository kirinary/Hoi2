
##############################
# Country definition for AST #
##############################

province =
{ id       = 1666
  ic       = 1
  air_base = { size = 1 current_size = 1 }
  anti_air = 1
}            # ÉâÉG
province =
{ id         = 1670
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 2 current_size = 2 }
}              # ÉRÉRÉ|
province =
{ id         = 1677
  ic         = 3
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 2 current_size = 2 }
  anti_air   = 1
  oilpool    = 50
  supplypool = 50
}              # É|Å[ÉgÉÇÉåÉXÉrÅ[
province = { id = 1696 anti_air = 2 coastalfort = 1 ic = 5 } # É^ÉEÉìÉYÉrÉã
province =
{ id         = 1703
  anti_air   = 2
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 4 current_size = 4 }
  ic         = 1
}              # É_Å[ÉEÉBÉì
province =
{ id          = 1711
  anti_air    = 2
  naval_base  = { size = 2 current_size = 2 }
  air_base    = { size = 4 current_size = 4 }
  coastalfort = 1
  ic          = 1
}               # ÉpÅ[ÉX
province =
{ id         = 1715
  anti_air   = 2
  naval_base = { size = 2 current_size = 2 }
  ic         = 7
}              # ÉjÉÖÅ[ÉLÉÉÉbÉXÉã
province = { id = 1718 anti_air = 2 ic = 3 } # ÉAÉfÉåÅ[Éh
province =
{ id          = 1722
  anti_air    = 2
  naval_base  = { size = 2 current_size = 2 }
  air_base    = { size = 4 current_size = 4 }
  coastalfort = 1
  ic          = 6
}               # ÉuÉäÉXÉxÉì
province =
{ id          = 1723
  anti_air    = 3
  naval_base  = { size = 6 current_size = 6 }
  air_base    = { size = 4 current_size = 4 }
  coastalfort = 2
  ic          = 8
}               # ÉVÉhÉjÅ[
province =
{ id          = 1727
  anti_air    = 2
  coastalfort = 1
  air_base    = { size = 2 current_size = 2 }
  naval_base  = { size = 4 current_size = 4 }
  ic          = 9
}               # ÉLÉÉÉìÉxÉâ
province =
{ id          = 1730
  anti_air    = 2
  coastalfort = 1
  naval_base  = { size = 4 current_size = 4 }
  air_base    = { size = 4 current_size = 4 }
  ic          = 5
}               # ÉÅÉãÉ{ÉãÉì

#####################
# Country main data #
#####################

country =
{ tag                 = AST
  manpower            = 340
  energy              = 3500
  metal               = 5800
  rare_materials      = 3400
  oil                 = 6000
  supplies            = 8000
  money               = 400
  capital             = 1727
  regular_id          = U91
  transports          = 500
  escorts             = 300
  nationalprovinces   = { 1703 1704 1706 1707 1708 1709 1710 1711 1712 1713 1715 1716 1717 1718 1719 1722 1723 1724 1725 1727 1730 1732 1733 1693 1696
                          1697 1698 1700 1702 1729
                        }
  ownedprovinces      = { 1703 1704 1706 1707 1708 1709 1710 1711 1712 1713 1715 1716 1717 1718 1719 1722 1723 1724 1725 1727 1730 1732 1733 1693 1696
                          1697 1698 1700 1702 1729 1666 1667 1672 1675 1677 1678 1679 1680 1681 1668 1669 1670 1671 1682 2238 2234
                        }
  controlledprovinces = { 1703 1704 1706 1707 1708 1709 1710 1711 1712 1713 1715 1716 1717 1718 1719 1722 1723 1724 1725 1727 1730 1732 1733 1693 1696
                          1697 1698 1700 1702 1729 1666 1667 1672 1675 1677 1678 1679 1680 1681 1668 1669 1670 1671 1682 2238 2234
                        }
  techapps            = { 10050 1010  10190 1020  10200 10210 1030  1040  10490 1110  1120  1130  1210  1220  1230  1550  1560  1650  1660  1850 
                          2010  2020  20210 3010  3020  3030  3110  3120  3130  3210  3220  3460  3470  3810  3820  3910  3920  4390  4400  4410 
                          4480  4560  50020 50030 50040 50070 50080 50090 5010  50100 50110 50120 5020  50290 5030  50300 5090  5100  5170  5180 
                          5410  5420  5430  5460  5600  5610  5620  5910  5920  2000  2210  3000  4000  5000  6100  6110  6280  6290  7010  80080 80090
                          8010  80160 8020  8030  8040  8050  8060  8070  8080  8090  8100  8110  8120  9010  9020  9030  9040  9050  9060  9190 
                          9200  9340  9350  9360  9370  9380  9390  9400  9520  9530  9670  9680  9690  9700  9710  9840  9850 
                        }
  policy              = { democratic = 9 political_left = 2 freedom = 8 free_market = 8 professional_army = 7 defense_lobby = 7 interventionism = 6 }
  inventions             = { 8006 }
  landunit =
  { id       = { type = 1501 id = 4279 }
    name     = "ëÊ1åRíc"
    location = 1666
    home     = 1666
    division =
    { id            = { type = 1501 id = 4281 }
      name          = "ëÊ1éxâáïîë‡"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4282 }
    name     = "ëÊ2åRíc"
    location = 1670
    home     = 1670
    division =
    { id            = { type = 1501 id = 4284 }
      name          = "ëÊ2éxâáïîë‡"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4285 }
    name     = "ëÊ3åRíc"
    location = 1677
    home     = 1677
    division =
    { id            = { type = 1501 id = 4287 }
      name          = "ëÊ3éxâáïîë‡"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4288 }
    name     = "ëÊ4åRíc"
    location = 1711
    home     = 1711
    division =
    { id            = { type = 1501 id = 4290 }
      name          = "ëÊ4éxâáïîë‡"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4291 }
    name     = "ëÊ5åRíc"
    location = 1703
    home     = 1703
    division =
    { id            = { type = 1501 id = 4293 }
      name          = "ëÊ5éxâáïîë‡"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4294 }
    name     = "ëÊ6åRíc"
    location = 1696
    home     = 1696
    division =
    { id            = { type = 1501 id = 4296 }
      name          = "ëÊ6éxâáïîë‡"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4297 }
    name     = "ëÊ7åRíc"
    location = 1718
    home     = 1718
    division =
    { id            = { type = 1501 id = 4299 }
      name          = "ëÊ7éxâáïîë‡"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4300 }
    name     = "ëÊ8åRíc"
    location = 1722
    home     = 1722
    division =
    { id            = { type = 1501 id = 4302 }
      name          = "ëÊ8éxâáïîë‡"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4303 }
    name     = "ëÊ9åRíc"
    location = 1715
    home     = 1715
    division =
    { id            = { type = 1501 id = 4305 }
      name          = "ëÊ9éxâáïîë‡"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4306 }
    name     = "ëÊ10åRíc"
    location = 1729
    home     = 1729
    division =
    { id            = { type = 1501 id = 4308 }
      name          = "ëÊ10éxâáïîë‡"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1501 id = 4309 }
    name     = "ëÊ11åRíc"
    location = 1723
    home     = 1723
    division =
    { id            = { type = 1501 id = 4311 }
      name          = "ëÊ1ã@äBâªëïçbï‡ï∫ïîë‡"
      model         = 2
      brigade_model = 0
      type          = mechanized
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4312 }
      name          = "ëÊ2ã@äBâªëïçbï‡ï∫ïîë‡"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 1501 id = 4313 }
    name     = "ëÊ12åRíc"
    location = 1727
    home     = 1727
    division =
    { id            = { type = 1501 id = 4315 }
      name          = "ëÊ3ã@äBâªëïçbï‡ï∫ïîë‡"
      model         = 2
      brigade_model = 0
      type          = mechanized
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4316 }
      name          = "ëÊ4ã@äBâªëïçbï‡ï∫ïîë‡"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 1501 id = 4317 }
    name     = "ëÊ13åRíc"
    location = 1730
    home     = 1730
    division =
    { id            = { type = 1501 id = 4319 }
      name          = "ëÊ5ã@äBâªëïçbï‡ï∫ïîë‡"
      model         = 2
      brigade_model = 0
      type          = mechanized
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4320 }
      name          = "ëÊ6ã@äBâªëïçbï‡ï∫ïîë‡"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 1501 id = 4321 }
    name     = "ëÊ14åRíc"
    location = 1727
    home     = 1727
    division =
    { id            = { type = 1501 id = 4323 }
      name          = "ëÊ1ëïçbïîë‡"
      model         = 2
      brigade_model = 0
      type          = light_armor
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4324 }
      name          = "ëÊ2ëïçbïîë‡"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4325 }
      name          = "ëÊ3ëïçbïîë‡"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 1501 id = 4326 }
    name     = "ëÊ15åRíc"
    location = 1727
    home     = 1727
    division =
    { id            = { type = 1501 id = 4328 }
      name          = "ëÊ1ã@çbïîë‡"
      model         = 2
      brigade_model = 0
      type          = armor
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4329 }
      name          = "ëÊ2ã@çbïîë‡"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4330 }
      name          = "ëÊ3ã@çbïîë‡"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 1501 id = 4341 }
    name     = "ëÊ18åRíc"
    location = 1727
    home     = 1727
    division =
    { id            = { type = 1501 id = 4343 }
      name          = "ëÊ5êÌèpã@çbëÂë‡"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4344 }
      name          = "ëÊ6êÌèpã@çbëÂë‡"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4345 }
      name          = "ëÊ6ã@çbïîë‡"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 1501 id = 4346 }
    name     = "ëÊ19åRíc"
    location = 1727
    home     = 1727
    division =
    { id            = { type = 1501 id = 4348 }
      name          = "ëÊ7êÌèpã@çbëÂë‡"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4349 }
      name          = "ëÊ8êÌèpã@çbëÂë‡"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 1501 id = 4350 }
      name          = "ëÊ7ã@çbïîë‡"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  navalunit =
  { id       = { type = 1502 id = 2371 }
    name     = "ÉIÅ[ÉXÉgÉâÉäÉAäCåR ëÊ1äÕë‡"
    location = 1723
    home     = 1723
    base     = 1723
    division =
    { id       = { type = 1502 id = 4351 }
      name     = "HMAS Australia"
      model    = 3
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4352 }
      name     = "HMAS Shropshire"
      model    = 3
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4353 }
      name     = "HMAS Canberra"
      model    = 2
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4354 }
      name     = "HMAS Darwin"
      model    = 2
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4355 }
      name     = "HMAS Newcastle"
      model    = 2
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4356 }
      name     = "HMAS Perth"
      model    = 3
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4357 }
      name     = "HMAS Sydney"
      model    = 3
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4358 }
      name     = "HMAS Hobart"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4359 }
      name     = "HMAS Brisbane"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4360 }
      name     = "HMAS Adelaide"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4361 }
      name     = "HMAS Encounter"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4362 }
      name     = "HMAS Protector"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4363 }
      name     = "HMAS Moresby"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4364 }
      name     = "HMAS Alice Springs"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4365 }
      name     = "HMAS Wagga Wagga"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4366 }
      name     = "HMAS Cooktown"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4367 }
      name     = "HMAS Bataan"
      model    = 3
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4368 }
      name     = "HMAS Arunta"
      model    = 3
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4369 }
      name     = "HMAS Warramunga"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4370 }
      name     = "HMAS Anzac"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4371 }
      name     = "HMAS Voyager"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4372 }
      name     = "HMAS Vendetta"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4373 }
      name     = "HMAS Vampire"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4374 }
      name     = "HMAS Waterhen"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4375 }
      name     = "HMAS Duchess"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4376 }
      name     = "HMAS Quadrant"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4377 }
      name     = "HMAS Queensborough"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4378 }
      name     = "HMAS Quiberon"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4379 }
      name     = "HMAS Quickmatch"
      model    = 2
      type     = destroyer
      strength            = 100
    }
  }
  navalunit =
  { id       = { type = 1502 id = 2372 }
    name     = "ÉIÅ[ÉXÉgÉâÉäÉAäCåR ëÊ1óAëóäÕë‡"
    location = 1723
    home     = 1723
    base     = 1723
    division =
    { id       = { type = 1502 id = 4380 }
      name     = "HMAS Kurumba"
      model    = 4
      type     = transport
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4381 }
      name     = "HMAS Cerebrus"
      model    = 4
      type     = transport
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4382 }
      name     = "HMAS Lae"
      model    = 4
      type     = transport
      strength            = 100
    }
  }
  navalunit =
  { id       = { type = 1502 id = 2373 }
    name     = "ÉIÅ[ÉXÉgÉâÉäÉAäCåR ëÊ1óAëóäÕë‡"
    location = 1723
    home     = 1723
    base     = 1723
    division =
    { id       = { type = 1502 id = 4383 }
      name     = "HMAS Oxley"
      model    = 2
      type     = submarine
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4384 }
      name     = "HMAS Otway"
      model    = 2
      type     = submarine
      strength            = 100
    }
    division =
    { id       = { type = 1502 id = 4385 }
      name     = "HMAS Ovens"
      model    = 2
      type     = submarine
      strength            = 100
    }
  }
}
