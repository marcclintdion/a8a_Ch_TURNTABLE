
    //#####################################################################################################################
    //#include "_SHADERS/shadowMap/shadowMap_INIT.cpp"
    //====================================================================================================================
    #include "_MODEL_FOLDERS_/lightSpheres/lightSpheres_Init.cpp"
    //====================================================================================================================
    
    //-----------------------------------------------------------------   
    glGenFramebuffers(1, &mainLightPass_fboId);    
    glGenTextures(1, &mainLightPass_TEXTURE);
    glBindTexture(GL_TEXTURE_2D, mainLightPass_TEXTURE);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)viewWidth, (GLsizei)viewHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);  
    
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
   
    glBindFramebuffer(GL_FRAMEBUFFER, mainLightPass_fboId);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, mainLightPass_TEXTURE, 0);
    glBindFramebuffer(GL_FRAMEBUFFER, 0);
   //====================================================================================================================              


    #include "_MODEL_FOLDERS_/frameBufferPlane/frameBufferPlane_Init.cpp"
    //====================================================================================================================
    #include "_MODEL_FOLDERS_/frameBufferPlane/gaussianBlur_INIT.cpp"//__GAUSSIAN_BLUR_IS_USING->> [frameBufferPlane] MODEL
    //#####################################################################################################################
        
        //=================================================================================================================
        #include "_SHADERS/plastic/rubber/rubber_SHADER_INIT.cpp"
        //====================================================================================
        #include "_SHADERS/SHADOWS/shadows_32bit_Stride_SHADER_INIT.cpp"
        #include "_SHADERS/SHADOWS/shadows_44bit_Stride_SHADER_INIT.cpp"
        //====================================================================================
        #include "_SHADERS/wood/goldenSunset/goldenSunset_SHADER_INIT.cpp"
        //====================================================================================
        #include "_SHADERS/ConeStep_01/steepPointy_SHADER_INIT.cpp"
        //====================================================================================
        #include "_SHADERS/ConeStep_01/shallowRound_SHADER_INIT.cpp"
        //====================================================================================
        #include "_SHADERS/marble/geod_A/geod_A_SHADER_INIT.cpp"
        //====================================================================================
        #include "_SHADERS/leaves/A/leaves_A_SHADER_INIT.cpp"
        //====================================================================================        
        #include "_SHADERS/plastic/hardShinyBumpPlastic/hardShinyBumpPlastic_SHADER_INIT.cpp"
        //====================================================================================        
        //####################################################################################
        
        #include "_MODEL_FOLDERS_/facing_UP/facing_UP_Init.cpp"
        //====================================================================================
        #include "_MODEL_FOLDERS_/facing_VIEW/facing_VIEW_Init.cpp"
        //====================================================================================
        #include "_MODEL_FOLDERS_/facing_Sideways_blocks_01/facing_Sideways_blocks_01_INIT.cpp"
        //====================================================================================
        #include "_MODEL_FOLDERS_/flowerShield/flowerShield_Init.cpp"
        //====================================================================================
        #include "_MODEL_FOLDERS_/sculptris/sculptris_Init.cpp"
        //====================================================================================
        #include "_MODEL_FOLDERS_/sphere/sphere_Init.cpp"
        //====================================================================================
        #include "_MODEL_FOLDERS_/spiralGear/spiralGear_Init.cpp"
        //====================================================================================
        #include "_MODEL_FOLDERS_/knight/knight_Init.cpp"
        //====================================================================================
        #include "_MODEL_FOLDERS_/floorStraps/floorStraps_Init.cpp"
        //====================================================================================
        #include "_MODEL_FOLDERS_/wallStraps/wallStraps_Init.cpp"
        //====================================================================================
        #include "_MODEL_FOLDERS_/blocksEdging/blocksEdging_Init.cpp"
        //====================================================================================
        #include "_MODEL_FOLDERS_/pillerPlantPot/pillerPlantPot_Init.cpp"
        //====================================================================================
        #include "_MODEL_FOLDERS_/plant_v005/plant_v005_Init.cpp"                                                                   
        //====================================================================================                                                                
        #include "_MODEL_FOLDERS_/mouldings/mouldings_Init.cpp"                                                                   
        //====================================================================================                                                                
        #include "_MODEL_FOLDERS_/chassisFan/chassisFan_Init.cpp"                                                                   
        //==================================================================================== 








