
##############################
# Country definition for ITA #
##############################
province =
{ id         = 368
  landfort   = 5
  anti_air   = 3
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 4 current_size = 4 }
}              # ƒWƒFƒmƒ”ƒ@
province =
{ id       = 370
  air_base = { size = 4 current_size = 4 }
  anti_air = 3
}            # ƒ~ƒ‰ƒm
province = { id = 372 anti_air = 3 } # ƒ‹ƒK[ƒm
province =
{ id         = 378
  anti_air   = 2
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
}              # ƒ”ƒFƒlƒeƒBƒA
province = { id = 512 anti_air = 1 } # ƒ{ƒ[ƒjƒƒ
province = { id = 513 anti_air = 1 } # ƒtƒBƒŒƒ“ƒcƒF
province =
{ id       = 515
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # ƒ[ƒ}
province =
{ id       = 520
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # ƒtƒHƒbƒWƒA
province =
{ id            = 521
  anti_air      = 2
  air_base      = { size = 4 current_size = 4 }
  naval_base    = { size = 10 current_size = 10 }
}                 # ƒiƒ|ƒŠ
province =
{ id         = 523
  anti_air   = 1
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 6 current_size = 6 }
}              # ƒ^[ƒ‰ƒ“ƒg
province =
{ id         = 525
  anti_air   = 2
  supplypool = 500
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 10 current_size = 10 }
}              # ƒpƒŒƒ‹ƒ‚
province =
{ id         = 526
  air_base   = { size = 10 current_size = 10 }
}              # ƒƒbƒV[ƒi
province = { id = 527 landfort = 3 } # ƒOƒ‹ƒm[ƒuƒ‹
province =
{ id       = 530
  air_base = { size = 2 current_size = 2 }
}            # ƒWƒ…ƒl[ƒ”
province = { id = 531 anti_air = 3 } # ƒgƒŠƒm

#####################
# Country main data #
#####################

country =
{ tag                 = ITA
  manpower            = 4250
  energy              = 58000
  metal               = 36000
  rare_materials      = 45000
  oil                 = 12000
  supplies            = 8000
  money               = 3500
  capital             = 515
  transports          = 1800
  escorts             = 1500
  regular_id          = U02
  nationalprovinces   = { 31 368 369 370 371 378 379 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 531 534 542 
                          543 544 545 666 668 1408 2325 2326 }
  ownedprovinces      = { 31 368 369 370 371 378 379 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 531 534 542 
                          543 544 545 666 668 1408 2325 2326 }
  controlledprovinces = { 31 368 369 370 371 378 379 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 531 534 542 
                          543 544 545 666 668 1408 2325 2326 }
  techapps            = { 
                         1130 1230 1570 1670 1770 1870 1970
                         2010 2020 2030 2040 2050 2310 2320 2610 2620 2910 2920 10050 10060 1010  10190 1020  10200 1030    1110  1120 
                          1210  1220  1470  1490  1510  1530  1550  1560  1650  1660
                          1750  1760  1850  1860  1950  1960
                          3010  3020  30410 30420 30510 30520 3110 
                          3120  3210  3220  3460  3470
                          3560      3910  3920
                          3940  40100 40110 4390  4400  4010  4020  4110  4120  4210  4220  4640  4650  4820  4830
                          4560  50020 50030   50070 50080  5010    50090 50100 5020  50290 50300 50310
                          5090  5100  5170  5180  5250  5260  5330  5340  5410  5420
                          5490  5500  5600  5610  5680  5690  5760  5770  5780  5790  5800  5810
                          5910  5920  7010  80080 80090 8010  80100 80160 8020  8030  8040  8050  8060  8070  8280  8290  8300  8310  8320  8330  9010  90140
                          90190 9020  9030  9040  9050  9060  9070  9190  9200  9210  9340  9350  9360  9370  9380  9390  9400  9520  9530  9540 
                          9550  9670  9680  9690  9700  9710  9720  9840  9850  9860  9990  2000  2210  3000  4000  5000
                          6130  6120  6310
                        }
  inventions          = { }
  policy =
  { democratic        = 10
    political_left    = 2
    freedom           = 9
    free_market       = 9
    professional_army = 9
    defense_lobby     = 10
    interventionism   = 9
  }
  landunit =
  { id       = { type = 25001 id = 244 }
    name     = "‘æ1íp‹@bt’c"
    location = 378
    division =
    { id            = { type = 25001 id = 245 }
      name          = "‘æ1íp‹@b‘å‘à"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 246 }
      name          = "‘æ2íp‹@b‘å‘à"
      model         = 2
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 247 }
      name          = "‘æ3íp‹@b‘å‘à"
      model         = 2
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 248 }
      name          = "‘æ1íÔ‘å‘à"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 249 }
      name          = "‘æ2íÔ‘å‘à"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 250 }
      name          = "‘æ1‹@ŠB‰»‘•b•à•º‘å‘à"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25001 id = 251 }
    name     = "‘æ2íp‹@bt’c"
    location = 378
    division =
    { id            = { type = 25001 id = 252 }
      name          = "‘æ4íp‹@b‘å‘à"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 253 }
      name          = "‘æ5íp‹@b‘å‘à"
      model         = 2
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 254 }
      name          = "‘æ6íp‹@b‘å‘à"
      model         = 2
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 255 }
      name          = "‘æ3íÔ‘å‘à"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 256 }
      name          = "‘æ4íÔ‘å‘à"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 257 }
      name          = "‘æ2‹@ŠB‰»‘•b•à•º‘å‘à"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25001 id = 258 }
    name     = "‘æ3íp‹@bt’c"
    location = 378
    division =
    { id            = { type = 25001 id = 259 }
      name          = "‘æ7íp‹@b‘å‘à"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 260 }
      name          = "‘æ8íp‹@b‘å‘à"
      model         = 2
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 261 }
      name          = "‘æ9íp‹@b‘å‘à"
      model         = 2
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 262 }
      name          = "‘æ5íÔ‘å‘à"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 263 }
      name          = "‘æ6íÔ‘å‘à"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 264 }
      name          = "‘æ3‹@ŠB‰»‘•b•à•º‘å‘à"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25001 id = 265 }
    name     = "‘æ4íp‹@bt’c"
    location = 378
    division =
    { id            = { type = 25001 id = 266 }
      name          = "‘æ10íp‹@b‘å‘à"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 267 }
      name          = "‘æ11íp‹@b‘å‘à"
      model         = 2
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 268 }
      name          = "‘æ12íp‹@b‘å‘à"
      model         = 2
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 269 }
      name          = "‘æ7íÔ‘å‘à"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 270 }
      name          = "‘æ8íÔ‘å‘à"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 271 }
      name          = "‘æ4‹@ŠB‰»‘•b•à•º‘å‘à"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
  }
}
