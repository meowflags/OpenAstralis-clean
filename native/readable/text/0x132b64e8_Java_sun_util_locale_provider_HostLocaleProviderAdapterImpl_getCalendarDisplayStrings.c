// Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_getCalendarDisplayStrings
// rva 0x132b64e8  size 449  section .text  group text
// window base 0x1932b64e8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_getCalendarDisplayStrings(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        int a12)
{
  __int64 (__fastcall *v14)(__int64, __int64, __int64, __int64, __int64); // rbx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rbx
  int v19; // edi
  int v20; // esi
  __int64 (__fastcall *v21)(__int64, __int64, __int64, __int64, __int64); // rbx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  char v25; // dl
  __int64 (__fastcall *v26)(__int64, __int64, __int64, __int64, __int64); // rbx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rsi

  if ( a11 != 0 )
  {
    switch ( a11 )
    {
      case 2:
        v26 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1376LL);
        v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a4 + 48LL))(a1: a4, a2: a6, a3: 543272);
        v18 = v26(a1: v28, a2: v29, a3: 13, a4: v28, a5: v27);
        if ( v18 == 0 )
          return v18;
        v25 = a12;
        break;
      case 7:
        v21 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1376LL);
        v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a4 + 48LL))(a1: a4, a2: a6, a3: 543272);
        v18 = v21(a1: v23, a2: v24, a3: 7, a4: v23, a5: v22);
        if ( v18 == 0 )
          return v18;
        v25 = a12;
        break;
      case 9:
        v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1376LL);
        v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a4 + 48LL))(a1: a4, a2: a6, a3: 543272);
        v18 = v14(a1: v16, a2: v17, a3: 2, a4: v16, a5: v15);
        if ( v18 == 0 )
          return v18;
        goto LABEL_7;
      default:
        return 0;
    }
    if ( (v25 & 1) != 0 )
      JUMPOUT(0x326510610LL);
LABEL_7:
    sub_132B7DD4(a1: v19, a2: v20, a3: a5, a4: v19, a5: v20, a6: v18);
    return v18;
  }
  return sub_132B7680(a1: a4, a2: a6, a3: a5, a4, a5: a6, a6: a12);
}
