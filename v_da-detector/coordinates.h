struct Coordinate {
    float lat;
    float lon;
    int type;
    int limit;
};

Coordinate coordinates[] = {
    {47.549000, 19.121843, 0, 50},
    {47.549789, 19.122327, 0, 50},
    {47.441300, 19.134219, 0, 50},
    {47.448278, 19.124030, 0, 50},
    {47.460440, 18.998486, 0, 50},
    {47.460726, 18.998742, 0, 50},
    {46.048961, 17.828868, 1, 50},
    {46.225248, 18.471075, 0, 50},
    {46.072207, 17.814499, 1, 50},
    {46.252197, 18.110912, 0, 50},
    {46.085555, 18.270215, 0, 50},
    {46.085560, 18.269658, 0, 50},
    {46.054726, 18.286437, 1, 50},
    {46.926829, 19.667114, 0, 50},
    {46.188200, 18.952221, 0, 50},
    {46.184440, 18.970706, 0, 50},
    {46.623624, 19.275881, 0, 50},
    {46.896494, 18.984557, 1, 50},
    {46.423908, 19.495894, 0, 50},
    {46.842880, 19.281463, 1, 50},
    {46.672022, 21.176084, 1, 50},
    {46.695349, 21.121260, 1, 50},
    {46.798685, 20.716940, 0, 50},
    {46.974854, 21.088872, 0, 50},
    {46.565743, 20.669015, 0, 50},
    {46.862888, 20.933659, 1, 50},
    {48.010172, 20.826165, 0, 50},
    {48.183367, 20.757264, 1, 50},
    {48.183367, 20.757264, 1, 50},
    {47.887306, 20.683077, 0, 50},
    {48.106272, 20.789811, 0, 50},
    {48.106705, 20.789710, 0, 50},
    {48.204344, 20.263373, 0, 50},
    {48.299726, 20.745265, 0, 50},
    {47.848851, 20.746208, 2, 50},
    {47.848632, 20.746087, 2, 50},
    {46.277743, 20.167053, 0, 50},
    {46.259810, 20.162527, 0, 50},
    {46.266349, 20.110308, 0, 50},
    {46.434576, 20.318311, 0, 50},
    {46.253720, 20.120461, 0, 50},
    {46.464798, 19.985007, 0, 50},
    {47.172826, 18.468576, 2, 50},
    {47.172966, 18.468850, 2, 50},
    {47.319470, 18.279249, 1, 50},
    {47.036645, 18.535269, 1, 50},
    {46.916138, 18.928120, 1, 50},
    {46.955030, 18.218817, 0, 50},
    {47.279758, 18.749032, 0, 50},
    {47.198013, 18.440209, 0, 50},
    {47.502844, 16.780645, 0, 50},
    {47.587309, 16.982876, 0, 50},
    {47.693917, 17.549470, 0, 50},
    {47.856128, 17.264388, 0, 50},
    {47.736864, 16.549398, 1, 50},
    {47.323914, 21.090239, 0, 50},
    {47.302916, 21.556958, 1, 50},
    {47.638981, 21.659109, 0, 50},
    {47.489330, 21.632533, 1, 50},
    {47.578073, 21.590622, 1, 50},
    {47.546247, 21.569829, 1, 50},
    {47.332151, 21.127139, 1, 50},
    {47.150768, 21.494978, 1, 50},
    {47.880992, 20.381692, 0, 50},
    {47.759477, 20.244569, 0, 50},
    {47.773959, 19.925026, 0, 50},
    {47.705471, 20.081286, 2, 50},
    {47.705504, 20.081629, 2, 50},
    {47.910120, 20.358337, 0, 50},
    {47.175091, 20.176526, 0, 50},
    {46.899849, 20.394629, 0, 50},
    {47.515163, 19.902168, 0, 50},
    {47.364398, 20.093114, 0, 50},
    {47.165942, 20.428589, 0, 50},
    {46.835641, 20.292561, 0, 50},
    {47.356946, 20.624332, 0, 50},
    {47.329112, 20.904080, 1, 50},
    {47.752641, 18.611463, 1, 50},
    {47.646116, 18.331549, 0, 50},
    {47.738297, 18.661466, 0, 50},
    {47.575099, 18.413768, 1, 50},
    {47.734297, 18.190604, 0, 50},
    {47.512171, 17.999449, 0, 50},
    {48.010096, 19.972821, 0, 50},
    {47.842803, 19.098315, 0, 50},
    {48.094532, 19.800646, 0, 50},
    {47.992907, 19.196496, 0, 50},
    {48.081845, 19.508629, 0, 50},
    {47.145301, 19.789045, 1, 50},
    {47.601766, 18.957206, 1, 50},
    {47.598198, 19.144881, 1, 50},
    {47.447334, 19.369419, 0, 50},
    {46.368391, 17.782562, 0, 50},
    {46.362245, 17.816792, 0, 50},
    {46.851589, 17.883882, 0, 50},
    {46.653269, 17.391557, 0, 50},
    {46.834879, 18.102801, 0, 50},
    {46.726204, 17.776029, 1, 50},
    {47.962746, 21.725054, 0, 50},
    {47.963178, 21.724998, 0, 50},
    {47.959892, 22.315211, 0, 50},
    {47.951864, 21.740634, 0, 50},
    {47.886787, 21.738176, 2, 50},
    {47.886833, 21.738517, 2, 50},
    {46.801925, 18.917606, 0, 50},
    {46.311822, 18.694744, 1, 50},
    {46.378805, 18.130994, 0, 50},
    {46.296844, 18.538947, 0, 50},
    {46.627676, 18.656350, 0, 50},
    {46.498706, 18.415953, 0, 50},
    {47.269588, 16.935132, 1, 50},
    {47.210333, 16.638731, 0, 50},
    {47.181653, 16.747736, 0, 50},
    {47.165803, 17.050097, 1, 50},
    {47.103373, 16.871698, 1, 50},
    {47.141908, 17.570762, 1, 50},
    {46.836279, 17.373422, 1, 50},
    {46.947983, 17.878270, 0, 50},
    {47.210658, 17.913323, 0, 50},
    {47.033020, 18.111391, 0, 50},
    {47.019185, 17.785130, 1, 50},
    {47.281311, 17.351505, 1, 50},
    {47.278369, 17.523280, 0, 50},
    {47.100934, 18.011792, 0, 50},
    {46.984008, 17.286199, 0, 50},
    {46.447913, 17.025635, 0, 50},
    {46.702066, 16.549273, 0, 50},
    {46.865168, 16.853709, 1, 50},
    {46.584433, 16.919088, 0, 50},
    {46.492860, 17.079483, 1, 50},
    {46.622197, 16.525465, 0, 50},
    {46.685912, 16.681640, 0, 50},
    {46.760544, 17.328331, 0, 50},
    {46.726746, 17.114232, 0, 50}
};