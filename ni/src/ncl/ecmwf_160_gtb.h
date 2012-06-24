/*
 *
 * European Centre for Medium-Range Weather Forecasts: Reading
 * ECMWF re-analysis statistics
 *
 * Center: 98
 * Subcenter: 0
 * Parameter table version: 160
 */

TBLE2 ecmwf_160_params[] = {
{49, "10 metre wind gust during averaging time", "m s**-1", "10FG"},
{127, "Atmospheric tide", "-", "AT"},
{128, "Budget values", "-", "BV"},
{129, "Geopotential", "m**2 s**-2", "Z"},
{130, "Temperature", "K", "T"},
{131, "U velocity", "m s**-1", "U"},
{132, "V velocity", "m s**-1", "V"},
{133, "Specific humidity", "kg kg**-1", "Q"},
{134, "Surface pressure", "Pa", "SP"},
{135, "Vertical velocity", "Pa s**-1", "W"},
{136, "Total column water", "kg m**-2", "TCW"},
{137, "Precipitable water content", "kg m**-2", "PWC"},
{138, "Vorticity (relative)", "s**-1", "VO"},
{139, "Soil temperature level 1", "K", "STL1"},
{140, "Soil wetness level 1", "m", "SWL1"},
{141, "Snow depth", "m of water", "SD"},
{142, "Large-scale precipitation", "kg m**-2 s**-1", "LSP"},
{143, "Convective precipitation", "kg m**-2 s**-1", "CP"},
{144, "Snowfall", "kg m**-2 s**-1", "SF"},
{145, "Boundary layer dissipation", "W m**-2", "BLD"},
{146, "Surface sensible heat flux", "W m**-2", "SSHF"},
{147, "Surface latent heat flux", "W m**-2", "SLHF"},
{151, "Mean sea level pressure", "Pa", "MSL"},
{152, "Logarithm of surface pressure", "-", "LNSP"},
{155, "Divergence", "s**-1", "D"},
{156, "Height", "m", "GH"},
{157, "Relative humidity", "(0 - 1)", "R"},
{158, "Tendency of surface pressure", "Pa s**-1", "TSP"},
{164, "Total cloud cover", "(0 - 1)", "TCC"},
{165, "10 metre U wind component", "m s**-1", "10U"},
{166, "10 metre V wind component", "m s**-1", "10V"},
{167, "2 metre temperature", "K", "2T"},
{168, "2 metre dewpoint temperature", "K", "2D"},
{170, "Soil temperature level 2", "K", "STL2"},
{171, "Soil wetness level 2", "m", "SWL2"},
{172, "Land-sea mask", "(0 - 1)", "LSM"},
{173, "Surface roughness", "m", "SR"},
{174, "Albedo", "(0 - 1)", "AL"},
{176, "Surface solar radiation", "W m**-2", "SSR"},
{177, "Surface thermal radiation", "W m**-2", "STR"},
{178, "Top solar radiation", "W m**-2", "TSR"},
{179, "Top thermal radiation", "W m**-2", "TTR"},
{180, "East-West surface stress", "N m**-2 s**-1", "EWSS"},
{181, "North-South surface stress", "N m**-2 s**-1", "NSSS"},
{182, "Evaporation", "kg m**-2 s**-1", "E"},
{183, "Soil temperature level 3", "K", "STL3"},
{184, "Soil wetness level 3", "m", "SWL3"},
{185, "Convective cloud cover", "(0 - 1)", "CCC"},
{186, "Low cloud cover", "(0 - 1)", "LCC"},
{187, "Medium cloud cover", "(0 - 1)", "MCC"},
{188, "High cloud cover", "(0 - 1)", "HCC"},
{190, "East-West component of sub-gridscale orographic variance", "m**2", "EWOV"},
{191, "North-South component of sub-gridscale orographic variance", "m**2", "NSOV"},
{192, "North-West/South-East component of sub-gridscale orographic variance", "m**2", "NWOV"},
{193, "North-East/South-West component of sub-gridscale orographic variance", "m**2", "NEOV"},
{195, "Latitudinal component of gravity wave stress", "N m**-2 s", "LGWS"},
{196, "Meridional component of gravity wave stress", "N m**-2 s", "MGWS"},
{197, "Gravity wave dissipation", "W m**-2 s", "GWD"},
{198, "Skin reservoir content", "m of water", "SRC"},
{199, "Percentage of vegetation", "%", "VEG"},
{200, "Variance of sub-gridscale orography", "m**2", "VSO"},
{201, "Maximum temperature at 2 metres during averaging time", "K", "MX2T"},
{202, "Minimium temperature at 2 metres during averaging time", "K", "MN2T"},
{204, "Precipitation analysis weights", "-", "PAW"},
{205, "Runoff", "kg m**-2 s**-1", "RO"},
{206, "Standard deviation of geopotential", "m**2 s**-2", "ZZ"},
{207, "Covariance of temperature and geopotential", "K m**2 s**-2", "TZ"},
{208, "Standard deviation of temperature", "K", "TT"},
{209, "Covariance of specific humidity and geopotential", "m**2 s**-2", "QZ"},
{210, "Covariance of specific humidity and temperature", "K", "QT"},
{211, "Standard deviation of specific humidity", "(0 - 1)", "QQ"},
{212, "Covariance of U component and geopotential", "m**3 s**-3", "UZ"},
{213, "Covariance of U component and temperature", "K m s**-1", "UT"},
{214, "Covariance of U component and specific humidity", "m s**-1", "UQ"},
{215, "Standard deviation of U velocity", "m s**-1", "UU"},
{216, "Covariance of V component and geopotential", "m**3 s**-3", "VZ"},
{217, "Covariance of V component and temperature", "K m s**-1", "VT"},
{218, "Covariance of V component and specific humidity", "m s**-1", "VQ"},
{219, "Covariance of V component and U component", "m**2 s**-2", "VU"},
{220, "Standard deviation of V component", "m s**-1", "VV"},
{221, "Covariance of W component and geopotential", "Pa m**2 s**-3", "WZ"},
{222, "Covariance of W component and temperature", "K Pa s**-1", "WT"},
{223, "Covariance of W component and specific humidity", "Pa s**-1", "WQ"},
{224, "Covariance of W component and U component", "Pa m s**-2", "WU"},
{225, "Covariance of W component and V component", "Pa m s**-2", "WV"},
{226, "Standard deviation of vertical velocity", "Pa s**-1", "WW"},
{228, "Total precipitation", "m", "TP"},
{229, "Instantaneous X surface stress", "N m**-2", "IEWS"},
{230, "Instantaneous Y surface stress", "N m**-2", "INSS"},
{231, "Instantaneous surface heat flux", "W m**-2", "ISHF"},
{232, "Instantaneous moisture flux", "kg m**-2 s**-1", "IE"},
{233, "Apparent surface humidity", "kg kg**-1", "ASQ"},
{234, "Logarithm of surface roughness length for heat", "-", "LSRH"},
{235, "Skin temperature", "K", "SKT"},
{236, "Soil temperature level 4", "K", "STL4"},
{237, "Soil wetness level 4", "m", "SWL4"},
{238, "Temperature of snow layer", "K", "TSN"},
{239, "Convective snowfall", "kg m**-2 s**-1", "CSF"},
{240, "Large-scale snowfall", "kg m**-2 s**-1", "LSF"},
{241, "Cloud liquid water content", "kg kg**-1", "CLWCER"},
{242, "Cloud cover", "(0 - 1)", "CC"},
{243, "Forecast albedo", "-", "FAL"},
{244, "Forecast surface roughness", "m", "FSR"},
{245, "Forecast logarithm of surface roughness for heat", "-", "FLSR"},
{246, "10 metre wind speed", "m s**-1", "10WS"},
{247, "Momentum flux", "N m**-2", "MOFL"},
{249, "Gravity wave dissipation flux", "W m**-2", ""},
{254, "Heaviside beta function", "(0 - 1)", "HSD"}
};
