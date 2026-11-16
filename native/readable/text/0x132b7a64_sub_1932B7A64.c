// sub_132B7A64
// rva 0x132b7a64  size 445  section .text  group text
// window base 0x1932b7a64: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B7A64(__int64 a1, __int64 a2, int a3, __int64 a4, __int16 *a5)
{
  int v5; // esi
  __int64 v7; // rdi
  unsigned int v9; // edx
  __int64 v10; // rdi
  int v11; // esi
  int v12; // eax
  unsigned __int64 v13; // rdx
  __int16 *v14; // rdi
  __int64 v15; // rsi
  int v16; // r8d
  unsigned __int64 v17; // rcx
  __int16 *v18; // r8
  __int16 v19; // r11
  int v20; // r9d
  _WORD *v21; // r10
  unsigned int v22; // eax
  __int64 v23; // rax
  unsigned __int64 i; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // [rsp+0h] [rbp-100h] BYREF
  int v32; // [rsp+20h] [rbp-E0h] BYREF
  int v33[3]; // [rsp+24h] [rbp-DCh] BYREF
  __int16 v34; // [rsp+30h] [rbp-D0h] BYREF
  char v35; // [rsp+32h] [rbp-CEh] BYREF
  _WORD v36[256]; // [rsp+230h] [rbp+130h] BYREF
  __int64 v37; // [rsp+430h] [rbp+330h]

  v5 = 0;
  v32 = 0;
  v7 = a4;
  v33[0] = 0;
  if ( a3 != 0 )
  {
    if ( a3 == 1 )
    {
      v9 = 536870937;
      goto LABEL_5;
    }
    if ( a3 == 3 )
      goto LABEL_6;
  }
  v9 = 536870929;
LABEL_5:
  sub_132B79F4(a1: a4, a2: 0, a3: v9, a4, a5: (__int64)&v32, a6: 4u);
LABEL_6:
  sub_132B79F4(a1: v7, a2: v5, a3: 0x20000012u, a4: v7, a5: (__int64)v33, a6: 4u);
  v12 = sub_132B79F4(a1: v10, a2: v11, a3: 0x10u, a4: v10, a5: (__int64)v36, a6: 0x100u);
  v16 = v32;
  if ( v32 != 0 )
  {
    if ( v32 > 0 )
    {
      v13 = 2LL * v32;
      v17 = v13 >> 1;
      v14 = (__int16 *)&v35;
      while ( v17 != 0 )
      {
        *v14++ = 35;
        --v17;
      }
    }
    v34 = 46;
    if ( 2 * (unsigned __int64)(unsigned int)(v16 + 1) >= 0x200 )
    {
      sub_132C925C(a1: v14, a2: v15, a3: v13);
      JUMPOUT(0x1932B7C20LL);
    }
    *(&v34 + (unsigned int)(v16 + 1)) = v15;
  }
  else
  {
    v34 = v15;
  }
  v18 = a5;
  v19 = 48;
  if ( v12 > 0 )
  {
    v20 = v12 - 2;
    if ( v12 - 2 >= 0 )
    {
      v21 = &v36[v20];
      do
      {
        if ( *v21 != 59 )
        {
          v22 = (unsigned __int16)*v21;
          if ( v22 > 0x30 )
          {
            *(_DWORD *)v18 = 2883619;
            v23 = v22 - 49;
            v18 += 2;
            if ( (int)v23 > 0 )
            {
              v14 = v18;
              for ( i = (unsigned __int64)(2 * v23) >> 1; i != 0; --i )
                *v14++ = 35;
              v18 += v23;
            }
          }
        }
        --v21;
        --v20;
      }
      while ( v20 >= 0 );
    }
  }
  if ( v33[0] == (_DWORD)v15 )
    v19 = 35;
  *v18 = v19;
  v18[1] = v15;
  __imp_api-ms-win-crt-string-l1-1-0.dll!wcscat_s(a1: v14, a2: v15, a3: 256, a4: a5, a5: &v34);
  return sub_132C8DE0(a1: v26, a2: v27, a3: v25, a4: (unsigned __int64)&v31 ^ v37, a5: v28, a6: v29);
}
