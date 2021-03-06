/*
HumanoidsTitles.hpp
Joel Goodman
07/26/2020

@brief
Class that wraps a hash map containing all the humanoids titles from the latest groupees bundle.
*/

#include <unordered_map>


using std::string;
using ISBN          = size_t;
using Title         = string;
using FileExtention = string;


class HumanoidsTitles
{
  static inline const std::unordered_map<ISBN, Title> titleMap
  {
    {9781594655333, "BARBARELLA VOL 1"},
    {9781594656972, "BARBARELLA VOL 2"},
    {9781594655890, "BEFORE THE INCAL VOL 1: FAREWELL, FATHER"},
    {9781594653575, "BEFORE THE INCAL VOL 2: CLASS R DETECTIVE"},
    {9781594653407, "BEFORE THE INCAL VOL 3: CROOT"},
    {9781594653247, "BEFORE THE INCAL VOL 4: PSYCHO ANARCHIST"},
    {9781594653483, "BEFORE THE INCAL VOL 5: VHISKY, SPV, AND HOMEO-WHORES"},
    {9781594653148, "BEFORE THE INCAL VOL 6: SUICIDE ALLEY"},
    {9781594658099, "CARTHAGO VOL 1: THE FORTUNA ISLAND LAGOON"},
    {9781594657108, "CARTHAGO VOL 2: THE CHALLENGER ABYSS"},
    {9781594657016, "CARTHAGO VOL 3: THE MONSTER OF DJIBOUTI"},
    {9781594657306, "CARTHAGO VOL 4: THE KOUBE MONOLITHS"},
    {9781594657047, "CARTHAGO VOL 5: THE CITY OF PLATO"},
    {9781594658167, "EXO (ENGLISH) VOL 2"},
    {9781594656064, "EXO (ENGLISH) VOL 3"},
    {9781594654411, "EXO VOL 1: DARWIN II"},
    {9781594655784, "FINAL INCAL VOL 1: THE FOUR JOHN DIFOOLS"},
    {9781594653315, "FINAL INCAL VOL 2: LUZ DE GARRA"},
    {9781594655074, "FINAL INCAL VOL 3: GORGO THE FOUL"},
    {9781594655289, "I AM LEGION VOL 1: THE DANCING FAUN"},
    {9781594654527, "I AM LEGION VOL 2: VLAD"},
    {9781594655081, "I AM LEGION VOL 3: THE THREE MONKEYS"},
    {9781643379876, "IGNITED 1"},
    {9781643375304, "IGNITED 2"},
    {9781643376257, "IGNITED 3"},
    {9781643378121, "IGNITED 4"},
    {9781594655944, "LEGEND OF THE SCARLET BLADES VOL 1: THE CITY THAT SPEAKS TO THE SKY"},
    {9781594654596, "LEGEND OF THE SCARLET BLADES VOL 2: LIKE LEAVES IN THE WIND"},
    {9781594654633, "LEGEND OF THE SCARLET BLADES VOL 3: THE PERFECT STROKE"},
    {9781594654749, "LEGEND OF THE SCARLET BLADES VOL 4: THE ABOMINATION'S HIDDEN FLOWER"},
    {9781643376646, "MARILYN'S MONSTERS VOL 1"},
    {9781594653636, "METAL HURLANT COLLECTION 1 VOL 1"},
    {9781594653810, "METAL HURLANT COLLECTION 1 VOL 2"},
    {9781594653049, "METAL HURLANT COLLECTION 1 VOL 3"},
    {9781594653858, "METAL HURLANT COLLECTION 2 VOL 1"},
    {9781594653681, "METAL HURLANT COLLECTION 2 VOL 2"},
    {9781594653278, "METAL HURLANT COLLECTION 2 VOL 3"},
    {9781594654176, "MILO MANARA'S GULLIVERA"},
    {9781594653667, "MISS: BETTER LIVING THROUGH CRIME VOL 1: BLOODY MANHATTAN"},
    {9781594657603, "MISS: BETTER LIVING THROUGH CRIME VOL 2: SWEET LULLABY"},
    {9781594657290, "MISS: BETTER LIVING THROUGH CRIME VOL 3: WHITE AS A LILY"},
    {9781594659041, "MISS: BETTER LIVING THROUGH CRIME VOL 4: BAD LUCK, MY LOVE"},
    {9781594655159, "MUSE VOL 1: CELIA"},
    {9781594655432, "MUSE VOL 2: CORALINE"},
    {9781594657870, "OLYMPUS VOL 1"},
    {9781594656828, "OLYMPUS VOL 2"},
    {9781643379081, "OMNI 1"},
    {9781643375816, "OMNI 2"},
    {9781643378893, "OMNI 3"},
    {9781643379494, "OMNI 4"},
    {9781594657436, "PANDORA'S EYES BLACK AND WHITE"},
    {9781643375182, "STRANGELANDS 1"},
    {9781643376318, "STRANGELANDS 2"},
    {9781643376363, "STRANGELANDS 3"},
    {9781643378978, "STRANGELANDS 4"},
    {9781643377421, "THE BIG COUNTRY"},
    {9781594654732, "THE EYES OF THE CAT"},
    {9781594655661, "THE INCAL VOL 1: THE BLACK INCAL"},
    {9781594655302, "THE INCAL VOL 2: THE LUMINOUS INCAL"},
    {9781594654299, "THE INCAL VOL 3: WHAT LIES BENEATH"},
    {9781594654350, "THE INCAL VOL 4: WHAT IS ABOVE"},
    {9781594654398, "THE INCAL VOL 5: THE FIFTH ESSENCE - THE DREAMING GALAXY"},
    {9781594654220, "THE INCAL VOL 6: THE FIFTH ESSENCE - PLANET DIFOOL"},
    {9781594653988, "THE LOVING DEAD VOL 1: LOVE AFTER DEATH"},
    {9781594654480, "THE LOVING DEAD VOL 2: WHEN ALL YOU'VE GOT IS DEATH"},
    {9781594653209, "THE LOVING DEAD VOL 3: NOTHING BUT DUST"},
    {9781594653063, "THE METABARONS VOL 1: OTHON"},
    {9781594653254, "THE METABARONS VOL 2: HONORATA"},
    {9781594653353, "THE METABARONS VOL 3: AGHNAR"},
    {9781594653704, "THE METABARONS VOL 4: ODA"},
    {9781594653711, "THE METABARONS VOL 5: STEELHEAD"},
    {9781594653872, "THE METABARONS VOL 6: DONA VICENTA"},
    {9781594653759, "THE METABARONS VOL 7: AGHORA"},
    {9781594653117, "THE METABARONS VOL 8: NO NAME, THE LAST METABARON"},
    {9781643378824, "THE TWILIGHT MAN"},
    {9781594653186, "WEAPONS OF THE METABARON"}
  };
public:
  static const string& getTitle(const ISBN& i){ return titleMap.at(i); }
};
