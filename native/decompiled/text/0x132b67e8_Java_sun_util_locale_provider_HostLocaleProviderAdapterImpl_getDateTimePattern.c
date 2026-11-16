// Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_getDateTimePattern
// rva 0x132b67e8  size 279  section .text  group text
// window base 0x1932b67e8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_getDateTimePattern(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11)
{
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // edx
  int v19; // edx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  unsigned int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v28; // [rsp+0h] [rbp-248h] BYREF
  _WORD v29[256]; // [rsp+20h] [rbp-228h] BYREF
  __int64 v30; // [rsp+220h] [rbp-28h]

  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, _QWORD))(*a4 + 1320))(
          a1: a5,
          a2: a6,
          a3: a11,
          a4,
          a5: 0);
  if ( v13 != 0 )
  {
    v29[0] = 0;
    if ( (unsigned int)v14 <= 1 )
    {
      v18 = 32;
    }
    else
    {
      if ( (unsigned int)(v14 - 2) > 1 )
        goto LABEL_7;
      v18 = 31;
    }
    sub_1932B79F4(a1: v14, a2: v15, a3: v18, a4: v13, a5: (unsigned int)v29, a6: 256);
LABEL_7:
    if ( (unsigned int)v15 <= 1 )
    {
      v19 = 4099;
    }
    else
    {
      if ( (unsigned int)(v15 - 2) > 1 )
      {
LABEL_12:
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *, __int64))(*a4 + 1328))(
          a1: v14,
          a2: v15,
          a3: a11,
          a4,
          a5: v13);
        v20 = *a4;
        v24 = MEMORY[0x79CB0](a1: v22, a2: v23, a3: v21, a4: v29);
        (*(void (__fastcall **)(__int64, __int64, _WORD *, __int64 *, _QWORD))(v20 + 1304))(
          a1: v25,
          a2: v26,
          a3: v29,
          a4,
          a5: v24);
        return sub_1932C8DE0(a1: v14, a2: v15, a3: v12, a4: (unsigned __int64)&v28 ^ v30, a5: v16, a6: v17);
      }
      v19 = 121;
    }
    sub_1932B79F4(a1: v14, a2: v15, a3: v19, a4: v13, a5: (unsigned int)v29, a6: 256);
    goto LABEL_12;
  }
  return sub_1932C8DE0(a1: v14, a2: v15, a3: v12, a4: (unsigned __int64)&v28 ^ v30, a5: v16, a6: v17);
}
