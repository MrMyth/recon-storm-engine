technique Blade
{
    pass p0
    {
        ZWriteEnable = false;
        AlphaTestEnable = false;
        AlphaBlendEnable = true;
        SrcBlend = srcalpha;
        DestBlend = one;
        ColorArg1[0] = diffuse;
        ColorArg2[0] = texture;
        ColorOp[0] = modulate;
        AlphaArg1[0] = diffuse;
        AlphaOp[0] = SelectArg1;
        ColorOp[1] = disable;
        AlphaOp[1] = disable;
        CullMode = none;
    }
}

technique AlphaBlade
{
    pass p0
    {
        ZWriteEnable = false;
        AlphaTestEnable = false;
        AlphaBlendEnable = true;
        SrcBlend = zero;
        DestBlend = one;
        ColorOp[0] = modulate;
        AlphaOp[0] = disable;

        CullMode = none;
    }
}