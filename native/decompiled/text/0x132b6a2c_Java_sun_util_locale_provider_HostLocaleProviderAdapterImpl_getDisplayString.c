// Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_getDisplayString
// rva 0x132b6a2c  size 249  section .text  group text
// window base 0x1932b6a2c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_getDisplayString(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v11; // rdi
  __int64 *v12; // rsi
  int v13; // r9d
  __int64 v14; // r9
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rsi
  int v19; // ebx
  __int64 v20; // rdi
  __int64 v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v26; // [rsp+0h] [rbp-248h] BYREF
  _BYTE v27[512]; // [rsp+20h] [rbp-228h] BYREF
  __int64 v28; // [rsp+220h] [rbp-28h]

  v11 = a11;
  v12 = a4;
  if ( a6 == 0 )
  {
    v15 = 4104;
    goto LABEL_9;
  }
  v13 = a6 - 1;
  if ( a6 == 1 )
  {
    v15 = 20;
LABEL_9:
    v11 = a5;
    goto LABEL_10;
  }
  v14 = (unsigned int)(v13 - 1);
  if ( (_DWORD)v14 != 0 )
  {
    if ( (_DWORD)v14 != 2 )
      return sub_1932C8DE0(a1: v11, a2: v12, a3, a4: (unsigned __int64)&v26 ^ v28, a5, a6: v14);
    v15 = 6;
  }
  else
  {
    v15 = 111;
  }
LABEL_10:
  v16 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *, _QWORD))(*a4 + 1320))(
          a1: v11,
          a2: a4,
          a3: v11,
          a4,
          a5: 0);
  v17 = v16;
  if ( v16 != 0 )
  {
    v19 = sub_1932B79F4(a1: v11, a2: (_DWORD)v12, a3: v15, a4: v16, a5: (unsigned int)v27, a6: 256);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v18 + 1328LL))(
      a1: v20,
      a2: v18,
      a3: v20,
      a4: v18,
      a5: v17);
    if ( v19 != 0 )
    {
      v21 = *v12;
      v22 = MEMORY[0x79CB0](a1: v11, a2: v12, a3, a4: v27);
      (*(void (__fastcall **)(__int64, __int64, _BYTE *, __int64, _QWORD))(v21 + 1304))(
        a1: v23,
        a2: v24,
        a3: v27,
        a4: v24,
        a5: v22);
    }
  }
  return sub_1932C8DE0(a1: v11, a2: v12, a3, a4: (unsigned __int64)&v26 ^ v28, a5, a6: v14);
}
