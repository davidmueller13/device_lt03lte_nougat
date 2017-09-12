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

#include "CameraParameters.h"

namespace android {

const char CameraParameters::KEY_DIS[] = "dis";
const char CameraParameters::DIS_DISABLE[] = "disable";
const char CameraParameters::KEY_DYNAMIC_RANGE_CONTROL[] = "dynamic-range-control";
const char CameraParameters::KEY_SUPPORTED_DYNAMIC_RANGE_CONTROL[] = "dynamic-range-control-values";
const char CameraParameters::DRC_ON[] = "on";
const char CameraParameters::DRC_OFF[] = "off";
const char CameraParameters::KEY_PHASE_AF[] = "phase-af";
const char CameraParameters::KEY_SUPPORTED_PHASE_AF[] = "phase-af-values";
const char CameraParameters::PAF_ON[] = "on";
const char CameraParameters::PAF_OFF[] = "off";
const char CameraParameters::KEY_RT_HDR[] = "rt-hdr";
const char CameraParameters::KEY_SUPPORTED_RT_HDR[] = "rt-hdr-values";
const char CameraParameters::RTHDR_ON[] = "on";
const char CameraParameters::RTHDR_OFF[] = "off";
const char CameraParameters::KEY_SUPPORTED_ISO_MODES[] = "iso-values";
const char CameraParameters::KEY_FACE_DETECTION[] = "face-detection";
const char CameraParameters::KEY_SUPPORTED_FACE_DETECTION[] = "face-detection-values";
const char CameraParameters::FACE_DETECTION_OFF[] = "off";
const char CameraParameters::FACE_DETECTION_ON[] = "on";
const char CameraParameters::KEY_ZSL[] = "zsl";
const char CameraParameters::KEY_SUPPORTED_ZSL_MODES[] = "zsl-values";
const char CameraParameters::ZSL_OFF[] = "off";
const char CameraParameters::ZSL_ON[] = "on";
const char CameraParameters::KEY_ISO_MODE[] = "iso";
const char CameraParameters::KEY_CAMERA_MODE[] = "camera-mode";
const char CameraParameters::KEY_SAMSUNG_CAMERA_MODE[] = "cam_mode";
const char CameraParameters::KEY_SELECTABLE_ZONE_AF[] = "selectable-zone-af";
const char CameraParameters::KEY_SUPPORTED_SELECTABLE_ZONE_AF[] = "selectable-zone-af-values";
const char CameraParameters::SELECTABLE_ZONE_AF_AUTO[] = "auto";
const char CameraParameters::SELECTABLE_ZONE_AF_SPOT_METERING[] = "spot-metering";
const char CameraParameters::SELECTABLE_ZONE_AF_CENTER_WEIGHTED[] = "center-weighted";
const char CameraParameters::SELECTABLE_ZONE_AF_FRAME_AVERAGE[] = "frame-average";
const char CameraParameters::KEY_PREVIEW_FRAME_RATE_MODE[] = "preview-frame-rate-mode";
const char CameraParameters::KEY_SUPPORTED_PREVIEW_FRAME_RATE_MODES[] = "preview-frame-rate-modes";
const char CameraParameters::KEY_PREVIEW_FRAME_RATE_AUTO_MODE[] = "frame-rate-auto";
const char CameraParameters::KEY_PREVIEW_FRAME_RATE_FIXED_MODE[] = "frame-rate-fixed";
const char CameraParameters::KEY_SHARPNESS[] = "sharpness";
const char CameraParameters::KEY_SATURATION[] = "saturation";
const char CameraParameters::KEY_CONTRAST[] = "contrast";
const char CameraParameters::KEY_SCENE_DETECT[] = "scene-detect";
const char CameraParameters::KEY_SUPPORTED_SCENE_DETECT[] = "scene-detect-values";
const char CameraParameters::SCENE_DETECT_OFF[] = "off";
const char CameraParameters::SCENE_DETECT_ON[] = "on";
const char CameraParameters::KEY_WEATHER[] = "weather";
const char CameraParameters::KEY_CITYID[] = "contextualtag-cityid";
const char CameraParameters::KEY_TOUCH_AF_AEC[] = "touch-af-aec";
const char CameraParameters::KEY_SUPPORTED_TOUCH_AF_AEC[] = "touch-af-aec-values";
const char CameraParameters::TOUCH_AF_AEC_OFF[] = "touch-off";
const char CameraParameters::TOUCH_AF_AEC_ON[] = "touch-on";
const char CameraParameters::KEY_MEMORY_COLOR_ENHANCEMENT[] = "mce";
const char CameraParameters::KEY_LENSSHADE[] = "lensshade";
const char CameraParameters::KEY_REDEYE_REDUCTION[] = "redeye-reduction";
const char CameraParameters::KEY_SUPPORTED_REDEYE_REDUCTION[] = "redeye-reduction-values";
const char CameraParameters::REDEYE_REDUCTION_ENABLE[] = "enable";
const char CameraParameters::REDEYE_REDUCTION_DISABLE[] = "disable";
const char CameraParameters::KEY_GPS_LATITUDE_REF[] = "gps-latitude-ref";
const char CameraParameters::KEY_GPS_LONGITUDE_REF[] = "gps-longitude-ref";
const char CameraParameters::KEY_GPS_ALTITUDE_REF[] = "gps-altitude-ref";
const char CameraParameters::KEY_GPS_STATUS[] = "gps-status";
const char CameraParameters::KEY_EXIF_DATETIME[] = "exif-datetime";
const char CameraParameters::KEY_AUTO_EXPOSURE[] = "auto-exposure";
const char CameraParameters::KEY_SUPPORTED_AUTO_EXPOSURE[] = "auto-exposure-values";
const char CameraParameters::KEY_SUPPORTED_LENSSHADE_MODES[] = "lensshade-values";
const char CameraParameters::LENSSHADE_ENABLE[] = "enable";
const char CameraParameters::LENSSHADE_DISABLE[] = "disable";
const char CameraParameters::MCE_ENABLE[] = "enable";
const char CameraParameters::MCE_DISABLE[] = "disable";
const char CameraParameters::ISO_AUTO[] = "auto";
const char CameraParameters::ISO_HJR[] = "ISO_HJR";
const char CameraParameters::ISO_100[] = "ISO100";
const char CameraParameters::ISO_200[] = "ISO200";
const char CameraParameters::ISO_400[] = "ISO400";
const char CameraParameters::ISO_800[] = "ISO800";
const char CameraParameters::ISO_1600[] = "ISO1600";
const char CameraParameters::ISO_3200[] = "ISO3200";
const char CameraParameters::ISO_6400[] = "ISO6400";
const char CameraParameters::KEY_SUPPORTED_HFR_SIZES[] = "hfr-size-values";
const char CameraParameters::KEY_SUPPORTED_MEM_COLOR_ENHANCE_MODES[] = "mce-values";
const char CameraParameters::VIDEO_HFR_OFF[] = "off";
const char CameraParameters::VIDEO_HFR_2X[] = "60";
const char CameraParameters::VIDEO_HFR_3X[] = "90";
const char CameraParameters::VIDEO_HFR_4X[] = "120";
const char CameraParameters::KEY_VIDEO_HIGH_FRAME_RATE[] = "video-hfr";
const char CameraParameters::KEY_SUPPORTED_VIDEO_HIGH_FRAME_RATE_MODES[] = "video-hfr-values";
const char CameraParameters::KEY_HISTOGRAM[] = "histogram";
const char CameraParameters::KEY_SUPPORTED_HISTOGRAM_MODES[] = "histogram-values";
const char CameraParameters::HISTOGRAM_ENABLE[] = "enable";
const char CameraParameters::HISTOGRAM_DISABLE[] = "disable";
const char CameraParameters::SKIN_TONE_ENHANCEMENT_ENABLE[] = "enable";
const char CameraParameters::SKIN_TONE_ENHANCEMENT_DISABLE[] = "disable";
const char CameraParameters::KEY_SKIN_TONE_ENHANCEMENT[] = "skinToneEnhancement";
const char CameraParameters::KEY_SUPPORTED_SKIN_TONE_ENHANCEMENT_MODES[] = "skinToneEnhancement-values";
const char CameraParameters::DENOISE_OFF[] = "denoise-off";
const char CameraParameters::DENOISE_ON[] = "denoise-on";
const char CameraParameters::KEY_DENOISE[] = "denoise";
const char CameraParameters::KEY_SUPPORTED_DENOISE[] = "denoise-values";
const char CameraParameters::EFFECT_EMBOSS[] = "emboss";
const char CameraParameters::EFFECT_SKETCH[] = "sketch";
const char CameraParameters::EFFECT_NEON[] = "neon";
const char CameraParameters::SCENE_MODE_FLOWERS[] = "flowers";
const char CameraParameters::SCENE_MODE_AR[] = "AR";
const char CameraParameters::PIXEL_FORMAT_YUV420SP_ADRENO[] = "yuv420sp-adreno";
const char CameraParameters::PIXEL_FORMAT_RAW[] = "raw";
const char CameraParameters::PIXEL_FORMAT_YV12[] = "yuv420p";
const char CameraParameters::PIXEL_FORMAT_NV12[] = "nv12";

int CameraParameters::getInt64(const char *key __attribute__ ((unused))) const
{
    return -1;
}

}; // namespace android
