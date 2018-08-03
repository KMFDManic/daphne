/*
 * m80tables.h
 *
 * Copyright (C) 2001 Matt Ownby
 *
 * This file is part of DAPHNE, a laserdisc arcade game emulator
 *
 * DAPHNE is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * DAPHNE is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */


Uint8 m80_inc_flags[256] = {

	0x50, // 00

	0x0, // 01

	0x0, // 02

	0x0, // 03

	0x0, // 04

	0x0, // 05

	0x0, // 06

	0x0, // 07

	0x8, // 08

	0x8, // 09

	0x8, // 0a

	0x8, // 0b

	0x8, // 0c

	0x8, // 0d

	0x8, // 0e

	0x8, // 0f

	0x10, // 010

	0x0, // 011

	0x0, // 012

	0x0, // 013

	0x0, // 014

	0x0, // 015

	0x0, // 016

	0x0, // 017

	0x8, // 018

	0x8, // 019

	0x8, // 01a

	0x8, // 01b

	0x8, // 01c

	0x8, // 01d

	0x8, // 01e

	0x8, // 01f

	0x30, // 020

	0x20, // 021

	0x20, // 022

	0x20, // 023

	0x20, // 024

	0x20, // 025

	0x20, // 026

	0x20, // 027

	0x28, // 028

	0x28, // 029

	0x28, // 02a

	0x28, // 02b

	0x28, // 02c

	0x28, // 02d

	0x28, // 02e

	0x28, // 02f

	0x30, // 030

	0x20, // 031

	0x20, // 032

	0x20, // 033

	0x20, // 034

	0x20, // 035

	0x20, // 036

	0x20, // 037

	0x28, // 038

	0x28, // 039

	0x28, // 03a

	0x28, // 03b

	0x28, // 03c

	0x28, // 03d

	0x28, // 03e

	0x28, // 03f

	0x10, // 040

	0x0, // 041

	0x0, // 042

	0x0, // 043

	0x0, // 044

	0x0, // 045

	0x0, // 046

	0x0, // 047

	0x8, // 048

	0x8, // 049

	0x8, // 04a

	0x8, // 04b

	0x8, // 04c

	0x8, // 04d

	0x8, // 04e

	0x8, // 04f

	0x10, // 050

	0x0, // 051

	0x0, // 052

	0x0, // 053

	0x0, // 054

	0x0, // 055

	0x0, // 056

	0x0, // 057

	0x8, // 058

	0x8, // 059

	0x8, // 05a

	0x8, // 05b

	0x8, // 05c

	0x8, // 05d

	0x8, // 05e

	0x8, // 05f

	0x30, // 060

	0x20, // 061

	0x20, // 062

	0x20, // 063

	0x20, // 064

	0x20, // 065

	0x20, // 066

	0x20, // 067

	0x28, // 068

	0x28, // 069

	0x28, // 06a

	0x28, // 06b

	0x28, // 06c

	0x28, // 06d

	0x28, // 06e

	0x28, // 06f

	0x30, // 070

	0x20, // 071

	0x20, // 072

	0x20, // 073

	0x20, // 074

	0x20, // 075

	0x20, // 076

	0x20, // 077

	0x28, // 078

	0x28, // 079

	0x28, // 07a

	0x28, // 07b

	0x28, // 07c

	0x28, // 07d

	0x28, // 07e

	0x28, // 07f

	0x94, // 080

	0x80, // 081

	0x80, // 082

	0x80, // 083

	0x80, // 084

	0x80, // 085

	0x80, // 086

	0x80, // 087

	0x88, // 088

	0x88, // 089

	0x88, // 08a

	0x88, // 08b

	0x88, // 08c

	0x88, // 08d

	0x88, // 08e

	0x88, // 08f

	0x90, // 090

	0x80, // 091

	0x80, // 092

	0x80, // 093

	0x80, // 094

	0x80, // 095

	0x80, // 096

	0x80, // 097

	0x88, // 098

	0x88, // 099

	0x88, // 09a

	0x88, // 09b

	0x88, // 09c

	0x88, // 09d

	0x88, // 09e

	0x88, // 09f

	0xb0, // 0a0

	0xa0, // 0a1

	0xa0, // 0a2

	0xa0, // 0a3

	0xa0, // 0a4

	0xa0, // 0a5

	0xa0, // 0a6

	0xa0, // 0a7

	0xa8, // 0a8

	0xa8, // 0a9

	0xa8, // 0aa

	0xa8, // 0ab

	0xa8, // 0ac

	0xa8, // 0ad

	0xa8, // 0ae

	0xa8, // 0af

	0xb0, // 0b0

	0xa0, // 0b1

	0xa0, // 0b2

	0xa0, // 0b3

	0xa0, // 0b4

	0xa0, // 0b5

	0xa0, // 0b6

	0xa0, // 0b7

	0xa8, // 0b8

	0xa8, // 0b9

	0xa8, // 0ba

	0xa8, // 0bb

	0xa8, // 0bc

	0xa8, // 0bd

	0xa8, // 0be

	0xa8, // 0bf

	0x90, // 0c0

	0x80, // 0c1

	0x80, // 0c2

	0x80, // 0c3

	0x80, // 0c4

	0x80, // 0c5

	0x80, // 0c6

	0x80, // 0c7

	0x88, // 0c8

	0x88, // 0c9

	0x88, // 0ca

	0x88, // 0cb

	0x88, // 0cc

	0x88, // 0cd

	0x88, // 0ce

	0x88, // 0cf

	0x90, // 0d0

	0x80, // 0d1

	0x80, // 0d2

	0x80, // 0d3

	0x80, // 0d4

	0x80, // 0d5

	0x80, // 0d6

	0x80, // 0d7

	0x88, // 0d8

	0x88, // 0d9

	0x88, // 0da

	0x88, // 0db

	0x88, // 0dc

	0x88, // 0dd

	0x88, // 0de

	0x88, // 0df

	0xb0, // 0e0

	0xa0, // 0e1

	0xa0, // 0e2

	0xa0, // 0e3

	0xa0, // 0e4

	0xa0, // 0e5

	0xa0, // 0e6

	0xa0, // 0e7

	0xa8, // 0e8

	0xa8, // 0e9

	0xa8, // 0ea

	0xa8, // 0eb

	0xa8, // 0ec

	0xa8, // 0ed

	0xa8, // 0ee

	0xa8, // 0ef

	0xb0, // 0f0

	0xa0, // 0f1

	0xa0, // 0f2

	0xa0, // 0f3

	0xa0, // 0f4

	0xa0, // 0f5

	0xa0, // 0f6

	0xa0, // 0f7

	0xa8, // 0f8

	0xa8, // 0f9

	0xa8, // 0fa

	0xa8, // 0fb

	0xa8, // 0fc

	0xa8, // 0fd

	0xa8, // 0fe

	0xa8, // 0ff

};

Uint8 m80_dec_flags[256] = {

	0x42, // 00

	0x2, // 01

	0x2, // 02

	0x2, // 03

	0x2, // 04

	0x2, // 05

	0x2, // 06

	0x2, // 07

	0xa, // 08

	0xa, // 09

	0xa, // 0a

	0xa, // 0b

	0xa, // 0c

	0xa, // 0d

	0xa, // 0e

	0x1a, // 0f

	0x2, // 010

	0x2, // 011

	0x2, // 012

	0x2, // 013

	0x2, // 014

	0x2, // 015

	0x2, // 016

	0x2, // 017

	0xa, // 018

	0xa, // 019

	0xa, // 01a

	0xa, // 01b

	0xa, // 01c

	0xa, // 01d

	0xa, // 01e

	0x1a, // 01f

	0x22, // 020

	0x22, // 021

	0x22, // 022

	0x22, // 023

	0x22, // 024

	0x22, // 025

	0x22, // 026

	0x22, // 027

	0x2a, // 028

	0x2a, // 029

	0x2a, // 02a

	0x2a, // 02b

	0x2a, // 02c

	0x2a, // 02d

	0x2a, // 02e

	0x3a, // 02f

	0x22, // 030

	0x22, // 031

	0x22, // 032

	0x22, // 033

	0x22, // 034

	0x22, // 035

	0x22, // 036

	0x22, // 037

	0x2a, // 038

	0x2a, // 039

	0x2a, // 03a

	0x2a, // 03b

	0x2a, // 03c

	0x2a, // 03d

	0x2a, // 03e

	0x3a, // 03f

	0x2, // 040

	0x2, // 041

	0x2, // 042

	0x2, // 043

	0x2, // 044

	0x2, // 045

	0x2, // 046

	0x2, // 047

	0xa, // 048

	0xa, // 049

	0xa, // 04a

	0xa, // 04b

	0xa, // 04c

	0xa, // 04d

	0xa, // 04e

	0x1a, // 04f

	0x2, // 050

	0x2, // 051

	0x2, // 052

	0x2, // 053

	0x2, // 054

	0x2, // 055

	0x2, // 056

	0x2, // 057

	0xa, // 058

	0xa, // 059

	0xa, // 05a

	0xa, // 05b

	0xa, // 05c

	0xa, // 05d

	0xa, // 05e

	0x1a, // 05f

	0x22, // 060

	0x22, // 061

	0x22, // 062

	0x22, // 063

	0x22, // 064

	0x22, // 065

	0x22, // 066

	0x22, // 067

	0x2a, // 068

	0x2a, // 069

	0x2a, // 06a

	0x2a, // 06b

	0x2a, // 06c

	0x2a, // 06d

	0x2a, // 06e

	0x3a, // 06f

	0x22, // 070

	0x22, // 071

	0x22, // 072

	0x22, // 073

	0x22, // 074

	0x22, // 075

	0x22, // 076

	0x22, // 077

	0x2a, // 078

	0x2a, // 079

	0x2a, // 07a

	0x2a, // 07b

	0x2a, // 07c

	0x2a, // 07d

	0x2a, // 07e

	0x3e, // 07f

	0x82, // 080

	0x82, // 081

	0x82, // 082

	0x82, // 083

	0x82, // 084

	0x82, // 085

	0x82, // 086

	0x82, // 087

	0x8a, // 088

	0x8a, // 089

	0x8a, // 08a

	0x8a, // 08b

	0x8a, // 08c

	0x8a, // 08d

	0x8a, // 08e

	0x9a, // 08f

	0x82, // 090

	0x82, // 091

	0x82, // 092

	0x82, // 093

	0x82, // 094

	0x82, // 095

	0x82, // 096

	0x82, // 097

	0x8a, // 098

	0x8a, // 099

	0x8a, // 09a

	0x8a, // 09b

	0x8a, // 09c

	0x8a, // 09d

	0x8a, // 09e

	0x9a, // 09f

	0xa2, // 0a0

	0xa2, // 0a1

	0xa2, // 0a2

	0xa2, // 0a3

	0xa2, // 0a4

	0xa2, // 0a5

	0xa2, // 0a6

	0xa2, // 0a7

	0xaa, // 0a8

	0xaa, // 0a9

	0xaa, // 0aa

	0xaa, // 0ab

	0xaa, // 0ac

	0xaa, // 0ad

	0xaa, // 0ae

	0xba, // 0af

	0xa2, // 0b0

	0xa2, // 0b1

	0xa2, // 0b2

	0xa2, // 0b3

	0xa2, // 0b4

	0xa2, // 0b5

	0xa2, // 0b6

	0xa2, // 0b7

	0xaa, // 0b8

	0xaa, // 0b9

	0xaa, // 0ba

	0xaa, // 0bb

	0xaa, // 0bc

	0xaa, // 0bd

	0xaa, // 0be

	0xba, // 0bf

	0x82, // 0c0

	0x82, // 0c1

	0x82, // 0c2

	0x82, // 0c3

	0x82, // 0c4

	0x82, // 0c5

	0x82, // 0c6

	0x82, // 0c7

	0x8a, // 0c8

	0x8a, // 0c9

	0x8a, // 0ca

	0x8a, // 0cb

	0x8a, // 0cc

	0x8a, // 0cd

	0x8a, // 0ce

	0x9a, // 0cf

	0x82, // 0d0

	0x82, // 0d1

	0x82, // 0d2

	0x82, // 0d3

	0x82, // 0d4

	0x82, // 0d5

	0x82, // 0d6

	0x82, // 0d7

	0x8a, // 0d8

	0x8a, // 0d9

	0x8a, // 0da

	0x8a, // 0db

	0x8a, // 0dc

	0x8a, // 0dd

	0x8a, // 0de

	0x9a, // 0df

	0xa2, // 0e0

	0xa2, // 0e1

	0xa2, // 0e2

	0xa2, // 0e3

	0xa2, // 0e4

	0xa2, // 0e5

	0xa2, // 0e6

	0xa2, // 0e7

	0xaa, // 0e8

	0xaa, // 0e9

	0xaa, // 0ea

	0xaa, // 0eb

	0xaa, // 0ec

	0xaa, // 0ed

	0xaa, // 0ee

	0xba, // 0ef

	0xa2, // 0f0

	0xa2, // 0f1

	0xa2, // 0f2

	0xa2, // 0f3

	0xa2, // 0f4

	0xa2, // 0f5

	0xa2, // 0f6

	0xa2, // 0f7

	0xaa, // 0f8

	0xaa, // 0f9

	0xaa, // 0fa

	0xaa, // 0fb

	0xaa, // 0fc

	0xaa, // 0fd

	0xaa, // 0fe

	0xba, // 0ff

};

Uint8 m80_sz53_flags[256] = {

	0x40, // 00

	0x0, // 01

	0x0, // 02

	0x0, // 03

	0x0, // 04

	0x0, // 05

	0x0, // 06

	0x0, // 07

	0x8, // 08

	0x8, // 09

	0x8, // 0a

	0x8, // 0b

	0x8, // 0c

	0x8, // 0d

	0x8, // 0e

	0x8, // 0f

	0x0, // 010

	0x0, // 011

	0x0, // 012

	0x0, // 013

	0x0, // 014

	0x0, // 015

	0x0, // 016

	0x0, // 017

	0x8, // 018

	0x8, // 019

	0x8, // 01a

	0x8, // 01b

	0x8, // 01c

	0x8, // 01d

	0x8, // 01e

	0x8, // 01f

	0x20, // 020

	0x20, // 021

	0x20, // 022

	0x20, // 023

	0x20, // 024

	0x20, // 025

	0x20, // 026

	0x20, // 027

	0x28, // 028

	0x28, // 029

	0x28, // 02a

	0x28, // 02b

	0x28, // 02c

	0x28, // 02d

	0x28, // 02e

	0x28, // 02f

	0x20, // 030

	0x20, // 031

	0x20, // 032

	0x20, // 033

	0x20, // 034

	0x20, // 035

	0x20, // 036

	0x20, // 037

	0x28, // 038

	0x28, // 039

	0x28, // 03a

	0x28, // 03b

	0x28, // 03c

	0x28, // 03d

	0x28, // 03e

	0x28, // 03f

	0x0, // 040

	0x0, // 041

	0x0, // 042

	0x0, // 043

	0x0, // 044

	0x0, // 045

	0x0, // 046

	0x0, // 047

	0x8, // 048

	0x8, // 049

	0x8, // 04a

	0x8, // 04b

	0x8, // 04c

	0x8, // 04d

	0x8, // 04e

	0x8, // 04f

	0x0, // 050

	0x0, // 051

	0x0, // 052

	0x0, // 053

	0x0, // 054

	0x0, // 055

	0x0, // 056

	0x0, // 057

	0x8, // 058

	0x8, // 059

	0x8, // 05a

	0x8, // 05b

	0x8, // 05c

	0x8, // 05d

	0x8, // 05e

	0x8, // 05f

	0x20, // 060

	0x20, // 061

	0x20, // 062

	0x20, // 063

	0x20, // 064

	0x20, // 065

	0x20, // 066

	0x20, // 067

	0x28, // 068

	0x28, // 069

	0x28, // 06a

	0x28, // 06b

	0x28, // 06c

	0x28, // 06d

	0x28, // 06e

	0x28, // 06f

	0x20, // 070

	0x20, // 071

	0x20, // 072

	0x20, // 073

	0x20, // 074

	0x20, // 075

	0x20, // 076

	0x20, // 077

	0x28, // 078

	0x28, // 079

	0x28, // 07a

	0x28, // 07b

	0x28, // 07c

	0x28, // 07d

	0x28, // 07e

	0x28, // 07f

	0x80, // 080

	0x80, // 081

	0x80, // 082

	0x80, // 083

	0x80, // 084

	0x80, // 085

	0x80, // 086

	0x80, // 087

	0x88, // 088

	0x88, // 089

	0x88, // 08a

	0x88, // 08b

	0x88, // 08c

	0x88, // 08d

	0x88, // 08e

	0x88, // 08f

	0x80, // 090

	0x80, // 091

	0x80, // 092

	0x80, // 093

	0x80, // 094

	0x80, // 095

	0x80, // 096

	0x80, // 097

	0x88, // 098

	0x88, // 099

	0x88, // 09a

	0x88, // 09b

	0x88, // 09c

	0x88, // 09d

	0x88, // 09e

	0x88, // 09f

	0xa0, // 0a0

	0xa0, // 0a1

	0xa0, // 0a2

	0xa0, // 0a3

	0xa0, // 0a4

	0xa0, // 0a5

	0xa0, // 0a6

	0xa0, // 0a7

	0xa8, // 0a8

	0xa8, // 0a9

	0xa8, // 0aa

	0xa8, // 0ab

	0xa8, // 0ac

	0xa8, // 0ad

	0xa8, // 0ae

	0xa8, // 0af

	0xa0, // 0b0

	0xa0, // 0b1

	0xa0, // 0b2

	0xa0, // 0b3

	0xa0, // 0b4

	0xa0, // 0b5

	0xa0, // 0b6

	0xa0, // 0b7

	0xa8, // 0b8

	0xa8, // 0b9

	0xa8, // 0ba

	0xa8, // 0bb

	0xa8, // 0bc

	0xa8, // 0bd

	0xa8, // 0be

	0xa8, // 0bf

	0x80, // 0c0

	0x80, // 0c1

	0x80, // 0c2

	0x80, // 0c3

	0x80, // 0c4

	0x80, // 0c5

	0x80, // 0c6

	0x80, // 0c7

	0x88, // 0c8

	0x88, // 0c9

	0x88, // 0ca

	0x88, // 0cb

	0x88, // 0cc

	0x88, // 0cd

	0x88, // 0ce

	0x88, // 0cf

	0x80, // 0d0

	0x80, // 0d1

	0x80, // 0d2

	0x80, // 0d3

	0x80, // 0d4

	0x80, // 0d5

	0x80, // 0d6

	0x80, // 0d7

	0x88, // 0d8

	0x88, // 0d9

	0x88, // 0da

	0x88, // 0db

	0x88, // 0dc

	0x88, // 0dd

	0x88, // 0de

	0x88, // 0df

	0xa0, // 0e0

	0xa0, // 0e1

	0xa0, // 0e2

	0xa0, // 0e3

	0xa0, // 0e4

	0xa0, // 0e5

	0xa0, // 0e6

	0xa0, // 0e7

	0xa8, // 0e8

	0xa8, // 0e9

	0xa8, // 0ea

	0xa8, // 0eb

	0xa8, // 0ec

	0xa8, // 0ed

	0xa8, // 0ee

	0xa8, // 0ef

	0xa0, // 0f0

	0xa0, // 0f1

	0xa0, // 0f2

	0xa0, // 0f3

	0xa0, // 0f4

	0xa0, // 0f5

	0xa0, // 0f6

	0xa0, // 0f7

	0xa8, // 0f8

	0xa8, // 0f9

	0xa8, // 0fa

	0xa8, // 0fb

	0xa8, // 0fc

	0xa8, // 0fd

	0xa8, // 0fe

	0xa8, // 0ff

};

Uint8 m80_sz53p_flags[256] = {

	0x44, // 00

	0x0, // 01

	0x0, // 02

	0x4, // 03

	0x0, // 04

	0x4, // 05

	0x4, // 06

	0x0, // 07

	0x8, // 08

	0xc, // 09

	0xc, // 0a

	0x8, // 0b

	0xc, // 0c

	0x8, // 0d

	0x8, // 0e

	0xc, // 0f

	0x0, // 010

	0x4, // 011

	0x4, // 012

	0x0, // 013

	0x4, // 014

	0x0, // 015

	0x0, // 016

	0x4, // 017

	0xc, // 018

	0x8, // 019

	0x8, // 01a

	0xc, // 01b

	0x8, // 01c

	0xc, // 01d

	0xc, // 01e

	0x8, // 01f

	0x20, // 020

	0x24, // 021

	0x24, // 022

	0x20, // 023

	0x24, // 024

	0x20, // 025

	0x20, // 026

	0x24, // 027

	0x2c, // 028

	0x28, // 029

	0x28, // 02a

	0x2c, // 02b

	0x28, // 02c

	0x2c, // 02d

	0x2c, // 02e

	0x28, // 02f

	0x24, // 030

	0x20, // 031

	0x20, // 032

	0x24, // 033

	0x20, // 034

	0x24, // 035

	0x24, // 036

	0x20, // 037

	0x28, // 038

	0x2c, // 039

	0x2c, // 03a

	0x28, // 03b

	0x2c, // 03c

	0x28, // 03d

	0x28, // 03e

	0x2c, // 03f

	0x0, // 040

	0x4, // 041

	0x4, // 042

	0x0, // 043

	0x4, // 044

	0x0, // 045

	0x0, // 046

	0x4, // 047

	0xc, // 048

	0x8, // 049

	0x8, // 04a

	0xc, // 04b

	0x8, // 04c

	0xc, // 04d

	0xc, // 04e

	0x8, // 04f

	0x4, // 050

	0x0, // 051

	0x0, // 052

	0x4, // 053

	0x0, // 054

	0x4, // 055

	0x4, // 056

	0x0, // 057

	0x8, // 058

	0xc, // 059

	0xc, // 05a

	0x8, // 05b

	0xc, // 05c

	0x8, // 05d

	0x8, // 05e

	0xc, // 05f

	0x24, // 060

	0x20, // 061

	0x20, // 062

	0x24, // 063

	0x20, // 064

	0x24, // 065

	0x24, // 066

	0x20, // 067

	0x28, // 068

	0x2c, // 069

	0x2c, // 06a

	0x28, // 06b

	0x2c, // 06c

	0x28, // 06d

	0x28, // 06e

	0x2c, // 06f

	0x20, // 070

	0x24, // 071

	0x24, // 072

	0x20, // 073

	0x24, // 074

	0x20, // 075

	0x20, // 076

	0x24, // 077

	0x2c, // 078

	0x28, // 079

	0x28, // 07a

	0x2c, // 07b

	0x28, // 07c

	0x2c, // 07d

	0x2c, // 07e

	0x28, // 07f

	0x80, // 080

	0x84, // 081

	0x84, // 082

	0x80, // 083

	0x84, // 084

	0x80, // 085

	0x80, // 086

	0x84, // 087

	0x8c, // 088

	0x88, // 089

	0x88, // 08a

	0x8c, // 08b

	0x88, // 08c

	0x8c, // 08d

	0x8c, // 08e

	0x88, // 08f

	0x84, // 090

	0x80, // 091

	0x80, // 092

	0x84, // 093

	0x80, // 094

	0x84, // 095

	0x84, // 096

	0x80, // 097

	0x88, // 098

	0x8c, // 099

	0x8c, // 09a

	0x88, // 09b

	0x8c, // 09c

	0x88, // 09d

	0x88, // 09e

	0x8c, // 09f

	0xa4, // 0a0

	0xa0, // 0a1

	0xa0, // 0a2

	0xa4, // 0a3

	0xa0, // 0a4

	0xa4, // 0a5

	0xa4, // 0a6

	0xa0, // 0a7

	0xa8, // 0a8

	0xac, // 0a9

	0xac, // 0aa

	0xa8, // 0ab

	0xac, // 0ac

	0xa8, // 0ad

	0xa8, // 0ae

	0xac, // 0af

	0xa0, // 0b0

	0xa4, // 0b1

	0xa4, // 0b2

	0xa0, // 0b3

	0xa4, // 0b4

	0xa0, // 0b5

	0xa0, // 0b6

	0xa4, // 0b7

	0xac, // 0b8

	0xa8, // 0b9

	0xa8, // 0ba

	0xac, // 0bb

	0xa8, // 0bc

	0xac, // 0bd

	0xac, // 0be

	0xa8, // 0bf

	0x84, // 0c0

	0x80, // 0c1

	0x80, // 0c2

	0x84, // 0c3

	0x80, // 0c4

	0x84, // 0c5

	0x84, // 0c6

	0x80, // 0c7

	0x88, // 0c8

	0x8c, // 0c9

	0x8c, // 0ca

	0x88, // 0cb

	0x8c, // 0cc

	0x88, // 0cd

	0x88, // 0ce

	0x8c, // 0cf

	0x80, // 0d0

	0x84, // 0d1

	0x84, // 0d2

	0x80, // 0d3

	0x84, // 0d4

	0x80, // 0d5

	0x80, // 0d6

	0x84, // 0d7

	0x8c, // 0d8

	0x88, // 0d9

	0x88, // 0da

	0x8c, // 0db

	0x88, // 0dc

	0x8c, // 0dd

	0x8c, // 0de

	0x88, // 0df

	0xa0, // 0e0

	0xa4, // 0e1

	0xa4, // 0e2

	0xa0, // 0e3

	0xa4, // 0e4

	0xa0, // 0e5

	0xa0, // 0e6

	0xa4, // 0e7

	0xac, // 0e8

	0xa8, // 0e9

	0xa8, // 0ea

	0xac, // 0eb

	0xa8, // 0ec

	0xac, // 0ed

	0xac, // 0ee

	0xa8, // 0ef

	0xa4, // 0f0

	0xa0, // 0f1

	0xa0, // 0f2

	0xa4, // 0f3

	0xa0, // 0f4

	0xa4, // 0f5

	0xa4, // 0f6

	0xa0, // 0f7

	0xa8, // 0f8

	0xac, // 0f9

	0xac, // 0fa

	0xa8, // 0fb

	0xac, // 0fc

	0xa8, // 0fd

	0xa8, // 0fe

	0xac, // 0ff

};

Uint8 m80_szhp_bit_flags[256] = {

	0x54, // 00

	0x10, // 01

	0x10, // 02

	0x10, // 03

	0x10, // 04

	0x10, // 05

	0x10, // 06

	0x10, // 07

	0x10, // 08

	0x10, // 09

	0x10, // 0a

	0x10, // 0b

	0x10, // 0c

	0x10, // 0d

	0x10, // 0e

	0x10, // 0f

	0x10, // 010

	0x10, // 011

	0x10, // 012

	0x10, // 013

	0x10, // 014

	0x10, // 015

	0x10, // 016

	0x10, // 017

	0x10, // 018

	0x10, // 019

	0x10, // 01a

	0x10, // 01b

	0x10, // 01c

	0x10, // 01d

	0x10, // 01e

	0x10, // 01f

	0x10, // 020

	0x10, // 021

	0x10, // 022

	0x10, // 023

	0x10, // 024

	0x10, // 025

	0x10, // 026

	0x10, // 027

	0x10, // 028

	0x10, // 029

	0x10, // 02a

	0x10, // 02b

	0x10, // 02c

	0x10, // 02d

	0x10, // 02e

	0x10, // 02f

	0x10, // 030

	0x10, // 031

	0x10, // 032

	0x10, // 033

	0x10, // 034

	0x10, // 035

	0x10, // 036

	0x10, // 037

	0x10, // 038

	0x10, // 039

	0x10, // 03a

	0x10, // 03b

	0x10, // 03c

	0x10, // 03d

	0x10, // 03e

	0x10, // 03f

	0x10, // 040

	0x10, // 041

	0x10, // 042

	0x10, // 043

	0x10, // 044

	0x10, // 045

	0x10, // 046

	0x10, // 047

	0x10, // 048

	0x10, // 049

	0x10, // 04a

	0x10, // 04b

	0x10, // 04c

	0x10, // 04d

	0x10, // 04e

	0x10, // 04f

	0x10, // 050

	0x10, // 051

	0x10, // 052

	0x10, // 053

	0x10, // 054

	0x10, // 055

	0x10, // 056

	0x10, // 057

	0x10, // 058

	0x10, // 059

	0x10, // 05a

	0x10, // 05b

	0x10, // 05c

	0x10, // 05d

	0x10, // 05e

	0x10, // 05f

	0x10, // 060

	0x10, // 061

	0x10, // 062

	0x10, // 063

	0x10, // 064

	0x10, // 065

	0x10, // 066

	0x10, // 067

	0x10, // 068

	0x10, // 069

	0x10, // 06a

	0x10, // 06b

	0x10, // 06c

	0x10, // 06d

	0x10, // 06e

	0x10, // 06f

	0x10, // 070

	0x10, // 071

	0x10, // 072

	0x10, // 073

	0x10, // 074

	0x10, // 075

	0x10, // 076

	0x10, // 077

	0x10, // 078

	0x10, // 079

	0x10, // 07a

	0x10, // 07b

	0x10, // 07c

	0x10, // 07d

	0x10, // 07e

	0x10, // 07f

	0x90, // 080

	0x90, // 081

	0x90, // 082

	0x90, // 083

	0x90, // 084

	0x90, // 085

	0x90, // 086

	0x90, // 087

	0x90, // 088

	0x90, // 089

	0x90, // 08a

	0x90, // 08b

	0x90, // 08c

	0x90, // 08d

	0x90, // 08e

	0x90, // 08f

	0x90, // 090

	0x90, // 091

	0x90, // 092

	0x90, // 093

	0x90, // 094

	0x90, // 095

	0x90, // 096

	0x90, // 097

	0x90, // 098

	0x90, // 099

	0x90, // 09a

	0x90, // 09b

	0x90, // 09c

	0x90, // 09d

	0x90, // 09e

	0x90, // 09f

	0x90, // 0a0

	0x90, // 0a1

	0x90, // 0a2

	0x90, // 0a3

	0x90, // 0a4

	0x90, // 0a5

	0x90, // 0a6

	0x90, // 0a7

	0x90, // 0a8

	0x90, // 0a9

	0x90, // 0aa

	0x90, // 0ab

	0x90, // 0ac

	0x90, // 0ad

	0x90, // 0ae

	0x90, // 0af

	0x90, // 0b0

	0x90, // 0b1

	0x90, // 0b2

	0x90, // 0b3

	0x90, // 0b4

	0x90, // 0b5

	0x90, // 0b6

	0x90, // 0b7

	0x90, // 0b8

	0x90, // 0b9

	0x90, // 0ba

	0x90, // 0bb

	0x90, // 0bc

	0x90, // 0bd

	0x90, // 0be

	0x90, // 0bf

	0x90, // 0c0

	0x90, // 0c1

	0x90, // 0c2

	0x90, // 0c3

	0x90, // 0c4

	0x90, // 0c5

	0x90, // 0c6

	0x90, // 0c7

	0x90, // 0c8

	0x90, // 0c9

	0x90, // 0ca

	0x90, // 0cb

	0x90, // 0cc

	0x90, // 0cd

	0x90, // 0ce

	0x90, // 0cf

	0x90, // 0d0

	0x90, // 0d1

	0x90, // 0d2

	0x90, // 0d3

	0x90, // 0d4

	0x90, // 0d5

	0x90, // 0d6

	0x90, // 0d7

	0x90, // 0d8

	0x90, // 0d9

	0x90, // 0da

	0x90, // 0db

	0x90, // 0dc

	0x90, // 0dd

	0x90, // 0de

	0x90, // 0df

	0x90, // 0e0

	0x90, // 0e1

	0x90, // 0e2

	0x90, // 0e3

	0x90, // 0e4

	0x90, // 0e5

	0x90, // 0e6

	0x90, // 0e7

	0x90, // 0e8

	0x90, // 0e9

	0x90, // 0ea

	0x90, // 0eb

	0x90, // 0ec

	0x90, // 0ed

	0x90, // 0ee

	0x90, // 0ef

	0x90, // 0f0

	0x90, // 0f1

	0x90, // 0f2

	0x90, // 0f3

	0x90, // 0f4

	0x90, // 0f5

	0x90, // 0f6

	0x90, // 0f7

	0x90, // 0f8

	0x90, // 0f9

	0x90, // 0fa

	0x90, // 0fb

	0x90, // 0fc

	0x90, // 0fd

	0x90, // 0fe

	0x90, // 0ff

};
