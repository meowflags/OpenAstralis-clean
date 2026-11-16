// sub_132B8174
// rva 0x132b8174  size 246  section .text  group text
// window base 0x1932b8174: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B8174(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        _BYTE *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int *a11)
{
  __int64 v11; // r15
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v16; // rdx
  _DWORD *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v24; // [rsp+0h] [rbp-188h] BYREF
  _BYTE *v25; // [rsp+20h] [rbp-168h]
  int *v26; // [rsp+28h] [rbp-160h]
  int v27; // [rsp+30h] [rbp-158h] BYREF
  _BYTE v28[256]; // [rsp+40h] [rbp-148h] BYREF
  __int64 v29; // [rsp+140h] [rbp-48h]

  v11 = a3;
  v26 = a11;
  v25 = a6;
  v13 = (unsigned int)*a11;
  v14 = *(_QWORD *)(8LL * a3 + 0x336F50);
  *a5 = 0;
  if ( (unsigned int)__imp_ADVAPI32.dll!RegQueryValueExW(a1: a5, a2: v13, a3: v14, a4, a5: 0, a6: a5) != 0 || *v17 != 1 )
  {
    v21 = *(_QWORD *)(8 * v11 + 0x336F58);
    v26 = &v27;
    v27 = 256;
    v25 = v28;
    if ( (unsigned int)__imp_ADVAPI32.dll!RegQueryValueExA(a1: v17, a2: v18, a3: v21, a4, a5: 0, a6: v17) == 0 && *v17 == 1 )
    {
      v22 = (unsigned int)v18 >> 1;
      LODWORD(v26) = v22;
      v25 = a6;
      if ( (int)__imp_KERNEL32.dll!MultiByteToWideChar(a1: v17, a2: v22, a3: 8, a4: 0, a5: v28, a6: 0xFFFFFFFFLL) > 0 )
        JUMPOUT(0x32651223FLL);
    }
  }
  return sub_132C8DE0(a1: v17, a2: v18, a3: v16, a4: (unsigned __int64)&v24 ^ v29, a5: v19, a6: v20);
}
