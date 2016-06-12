
##############################
# Country definition for HOL #
##############################
province =
{ id         = 46
  anti_air   = 2
  naval_base = { size = 6 current_size = 6 }
}              # ƒƒbƒeƒ‹ƒ_ƒ€
province =
{ id         = 47
  anti_air   = 2
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 10 current_size = 10 }
  landfort   = 1
}              # ƒAƒ€ƒXƒeƒ‹ƒ_ƒ€
province =
{ id         = 48
  anti_air   = 2
  naval_base = { size = 6 current_size = 6 }
}              # ƒ~ƒfƒ‹ƒuƒ‹ƒt
province = { id = 49 anti_air = 2 } # ƒAƒCƒ“ƒgƒz[ƒtƒFƒ“

#####################
# Country main data #
#####################

country =
{ tag                 = HOL
  manpower            = 4250
  energy              = 58000
  metal               = 36000
  rare_materials      = 45000
  oil                 = 12000
  supplies            = 8000
  money               = 3500
  capital             = 47
  transports          = 1800
  escorts             = 1500
  regular_id          = U02
  nationalprovinces   = { 46 47 48 49 77 78 79 1019 1082 }
  ownedprovinces      = { 46 47 48 49 77 78 79 1019 1082 }
  controlledprovinces = { 46 47 48 49 77 78 79 1019 1082 }
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
  { id       = { type = 25001 id = 170 }
    name     = "‘æ11íp‹@b—·’c"
    location = 77
    division =
    { id            = { type = 25001 id = 171 }
      name          = "‘æ1íp‹@b‘å‘à"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 172 }
      name          = "‘æ2íp‹@b‘å‘à"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 173 }
      name          = "‘æ1íÔ‘å‘à"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25001 id = 174 }
    name     = "‘æ15íp‹@b—·’c"
    location = 78
    division =
    { id            = { type = 25001 id = 175 }
      name          = "‘æ3íp‹@b‘å‘à"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 176 }
      name          = "‘æ4íp‹@b‘å‘à"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 177 }
      name          = "‘æ2íÔ‘å‘à"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25001 id = 178 }
    name     = "‘æ5íp‹@b—·’c"
    location = 1019
    division =
    { id            = { type = 25001 id = 179 }
      name          = "‘æ5íp‹@b‘å‘à"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 180 }
      name          = "‘æ6íp‹@b‘å‘à"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 181 }
      name          = "‘æ3íÔ‘å‘à"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
}
