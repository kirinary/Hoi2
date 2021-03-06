
##############################
# Country definition for U06 #
##############################

province =
{ id         = 1
  infra      = 1.5
  ic         = 20
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}

#####################
# Country main data #
#####################

country =
{ tag                 = U06
  manpower            = 1000
  energy              = 48000
  metal               = 38000
  rare_materials      = 38000
  oil                 = 40000
  supplies            = 20000
  money               = 3500
  regular_id          = U02
  capital             = 1
  escorts             = 1200
  transports          = 1200
  diplomacy =
  { relation = { tag = U02 value = 200 access = yes }
    relation = { tag = USA value = 200 access = yes }
  }
  free                = { energy = 180 metal = 150 rare_materials = 100 oil = 30 ic = 60 }
  nationalprovinces   = { 1 }
  ownedprovinces      = { 1 }
  controlledprovinces = { 1 }
  techapps            = { 2000  2210  3000  4000  5000  6100  6110  6280
                          1130  1230  1570  1670  1770  1870  1970
                          2010  2020  2030  2040  2050  2310  2320  2610  2620  2910  2920  10050 10060 10070 1010  10150 10190 1020  10200 10210 1030  1110  1120  1130  1140  1210  1220  1230  1240  1470  1490 
                          1510  1530  1550  1560  1570  1650  1660  1670  1750  1760  1770  1850  1860  1870  1950  1960  1970  2010  2020  20210
                          2030  20310 2040  2050  20510 2060  2310  2320  2610  2620  2630  2910  2920  2930  3010  3020  3030  30410 30420 30430
                          30510 30520 30530 3110  3120  3130  3210  3220  3230  3310  3320  3330  3460  3470  3480  3490  3610  3620  3630  3710 
                          3720  3730  3810  3820  3830  3910  3920  3940  3950  40000 40010 40020 4010  40100 40110 40120 4020  40200 40210 40220
                          4030  4110  4120  4130  4210  4220  4230  4390  4400  4410  4480  4490  4560  4570  4640  4650  4660  4820  4830  4840 
                          50020 50030 50040 50070 50080 50090 5010  50100 50090 50100 5020  50290 5030  50300 5090  5100  5110  5170  5180  5190  5250 
                          5260  5270  5330  5340  5350  5410  5420  5430  5490  5500  5510  5600  5610  5620  5680  5760  5770  5780  5910  5920 
                          5930  7010  7030  7040  7050  7060  7500  7510  7520  7530  7540  7550 
                          7670  7680  7690  7700  80080 80090 8010  80100 80160 8020  8030  8040  8050  8060  8070  8280  8290  8300  8310  90040
                          9010  90140 90190 9020  9030  9040  9050  9190  9200  9210  9340  9350  9360  9370  9380  9390  9520  9530  9540  9670 
                          9680  9690  9700  9710  9840  9850  9860
                        }
  policy =
  { democratic        = 10
    political_left    = 5
    freedom           = 10
    free_market       = 10
    professional_army = 10
    defense_lobby     = 10
    interventionism   = 10
  }
}
