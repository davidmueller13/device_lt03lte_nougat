/*
 * Copyright (C) 2017 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

namespace android {

class CameraParameters
{
public:
    static const char KEY_DIS[]; 
    static const char DIS_DISABLE[]; 
    static const char KEY_DYNAMIC_RANGE_CONTROL[]; 
    static const char KEY_SUPPORTED_DYNAMIC_RANGE_CONTROL[]; 
    static const char DRC_ON[]; 
    static const char DRC_OFF[]; 
    static const char KEY_PHASE_AF[]; 
    static const char KEY_SUPPORTED_PHASE_AF[]; 
    static const char PAF_ON[]; 
    static const char PAF_OFF[]; 
    static const char KEY_RT_HDR[]; 
    static const char KEY_SUPPORTED_RT_HDR[]; 
    static const char RTHDR_ON[]; 
    static const char RTHDR_OFF[]; 
    static const char KEY_SUPPORTED_ISO_MODES[]; 
    static const char KEY_FACE_DETECTION[]; 
    static const char KEY_SUPPORTED_FACE_DETECTION[]; 
    static const char FACE_DETECTION_OFF[]; 
    static const char FACE_DETECTION_ON[]; 
    static const char KEY_ZSL[]; 
    static const char KEY_SUPPORTED_ZSL_MODES[]; 
    static const char ZSL_OFF[]; 
    static const char ZSL_ON[]; 
    static const char KEY_ISO_MODE[]; 
    static const char KEY_CAMERA_MODE[]; 
    static const char KEY_SAMSUNG_CAMERA_MODE[]; 
    static const char KEY_SELECTABLE_ZONE_AF[]; 
    static const char KEY_SUPPORTED_SELECTABLE_ZONE_AF[]; 
    static const char SELECTABLE_ZONE_AF_AUTO[]; 
    static const char SELECTABLE_ZONE_AF_SPOT_METERING[]; 
    static const char SELECTABLE_ZONE_AF_CENTER_WEIGHTED[]; 
    static const char SELECTABLE_ZONE_AF_FRAME_AVERAGE[]; 
    static const char KEY_PREVIEW_FRAME_RATE_MODE[]; 
    static const char KEY_SUPPORTED_PREVIEW_FRAME_RATE_MODES[]; 
    static const char KEY_PREVIEW_FRAME_RATE_AUTO_MODE[]; 
    static const char KEY_PREVIEW_FRAME_RATE_FIXED_MODE[]; 
    static const char KEY_SHARPNESS[]; 
    static const char KEY_SATURATION[]; 
    static const char KEY_CONTRAST[]; 
    static const char KEY_SCENE_DETECT[]; 
    static const char KEY_SUPPORTED_SCENE_DETECT[]; 
    static const char SCENE_DETECT_OFF[]; 
    static const char SCENE_DETECT_ON[]; 
    static const char KEY_WEATHER[]; 
    static const char KEY_CITYID[]; 
    static const char KEY_TOUCH_AF_AEC[]; 
    static const char KEY_SUPPORTED_TOUCH_AF_AEC[]; 
    static const char TOUCH_AF_AEC_OFF[]; 
    static const char TOUCH_AF_AEC_ON[]; 
    static const char KEY_MEMORY_COLOR_ENHANCEMENT[]; 
    static const char KEY_LENSSHADE[]; 
    static const char KEY_REDEYE_REDUCTION[]; 
    static const char KEY_SUPPORTED_REDEYE_REDUCTION[]; 
    static const char REDEYE_REDUCTION_ENABLE[]; 
    static const char REDEYE_REDUCTION_DISABLE[]; 
    static const char KEY_GPS_LATITUDE_REF[]; 
    static const char KEY_GPS_LONGITUDE_REF[]; 
    static const char KEY_GPS_ALTITUDE_REF[]; 
    static const char KEY_GPS_STATUS[]; 
    static const char KEY_EXIF_DATETIME[]; 
    static const char KEY_AUTO_EXPOSURE[]; 
    static const char KEY_SUPPORTED_AUTO_EXPOSURE[]; 
    static const char KEY_SUPPORTED_LENSSHADE_MODES[]; 
    static const char LENSSHADE_ENABLE[]; 
    static const char LENSSHADE_DISABLE[]; 
    static const char MCE_ENABLE[]; 
    static const char MCE_DISABLE[]; 
    static const char ISO_AUTO[]; 
    static const char ISO_HJR[]; 
    static const char ISO_100[]; 
    static const char ISO_200[]; 
    static const char ISO_400[]; 
    static const char ISO_800[]; 
    static const char ISO_1600[]; 
    static const char ISO_3200[]; 
    static const char ISO_6400[]; 
    static const char KEY_SUPPORTED_HFR_SIZES[]; 
    static const char KEY_SUPPORTED_MEM_COLOR_ENHANCE_MODES[]; 
    static const char VIDEO_HFR_OFF[]; 
    static const char VIDEO_HFR_2X[]; 
    static const char VIDEO_HFR_3X[]; 
    static const char VIDEO_HFR_4X[]; 
    static const char KEY_VIDEO_HIGH_FRAME_RATE[]; 
    static const char KEY_SUPPORTED_VIDEO_HIGH_FRAME_RATE_MODES[]; 
    static const char KEY_HISTOGRAM[]; 
    static const char KEY_SUPPORTED_HISTOGRAM_MODES[]; 
    static const char HISTOGRAM_ENABLE[]; 
    static const char HISTOGRAM_DISABLE[]; 
    static const char SKIN_TONE_ENHANCEMENT_ENABLE[]; 
    static const char SKIN_TONE_ENHANCEMENT_DISABLE[]; 
    static const char KEY_SKIN_TONE_ENHANCEMENT[]; 
    static const char KEY_SUPPORTED_SKIN_TONE_ENHANCEMENT_MODES[]; 
    static const char DENOISE_OFF[]; 
    static const char DENOISE_ON[]; 
    static const char KEY_DENOISE[]; 
    static const char KEY_SUPPORTED_DENOISE[];
    static const char EFFECT_EMBOSS[]; 
    static const char EFFECT_SKETCH[]; 
    static const char EFFECT_NEON[]; 
    static const char SCENE_MODE_FLOWERS[]; 
    static const char SCENE_MODE_AR[]; 
    static const char PIXEL_FORMAT_YUV420SP_ADRENO[]; 
    static const char PIXEL_FORMAT_RAW[]; 
    static const char PIXEL_FORMAT_YV12[]; 
    static const char PIXEL_FORMAT_NV12[]; 
    int getInt64(const char *key) const; 
    const char *getPreviewFrameRateMode() const; 
    void setPreviewFrameRateMode(const char *mode); 
    void getMeteringAreaCenter(int *x, int *y) const; 
    void setTouchIndexAec(int x, int y); 
    void setTouchIndexAf(int x, int y); 
    void setPreviewFpsRange(int minFPS, int maxFPS);
};

}; // namespace android
