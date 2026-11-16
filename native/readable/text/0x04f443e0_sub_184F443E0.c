// sub_4F443E0
// rva 0x04f443e0  size 711  section .text  group text
// window base 0x184f443e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F443E0(__int64 a1, unsigned int a2, _DWORD *a3, __int64 a4, unsigned int a5, int a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // ebx
  unsigned int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 result; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  signed int v20; // r8d
  __int64 v21; // r8
  __int64 (__fastcall *v22)(__int64, _QWORD, _DWORD *, __int64, _QWORD); // r10
  __int16 v23; // ax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdi
  unsigned int i; // r11d
  __int64 (__fastcall *v29)(__int64, _QWORD, _DWORD *, _DWORD *); // rsi
  __int16 v30; // ax
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // [rsp+0h] [rbp-58h] BYREF
  __int64 v39; // [rsp+10h] [rbp-48h]
  __int64 v40; // [rsp+18h] [rbp-40h]
  __int64 v41; // [rsp+20h] [rbp-38h]
  _DWORD *v42; // [rsp+28h] [rbp-30h]
  unsigned int v43; // [rsp+30h] [rbp-28h]
  unsigned int v44; // [rsp+34h] [rbp-24h]
  unsigned int v45; // [rsp+38h] [rbp-20h]
  unsigned int v46; // [rsp+3Ch] [rbp-1Ch]
  unsigned int v47; // [rsp+40h] [rbp-18h]
  unsigned int v48; // [rsp+44h] [rbp-14h]
  unsigned int v49; // [rsp+48h] [rbp-10h]
  unsigned int v50; // [rsp+4Ch] [rbp-Ch]
  unsigned int v51; // [rsp+50h] [rbp-8h]
  int v52; // [rsp+54h] [rbp-4h]

  v42 = a3;
  v52 = a6;
  v51 = a2;
  if ( (unsigned __int64)&v38 <= *(_QWORD *)(v9 + 8) )
  {
LABEL_19:
    v50 = a5;
    sub_1EB84E0();
    goto LABEL_20;
  }
  v41 = a1;
  if ( (unsigned __int16)*(_DWORD *)(v8
                                   + 8LL * *(unsigned int *)(v8 + 8LL * (*a3 >> 3) + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v8 + 8LL * (*a3 >> 3) + 44)
                                    & (0x568u >> HIBYTE(*(_DWORD *)(v8 + 8LL * (*a3 >> 3) + 44))))
                                   + 12) != 1384 )
  {
LABEL_20:
    v50 = a5;
    sub_2770780();
    goto LABEL_21;
  }
  v50 = a5;
  v10 = *a3 >> 3;
  v11 = *(_DWORD *)(v8 + 8 * v10 + 44);
  v40 = v8 + 8LL * *(unsigned int *)(v8 + 8 * v10 + 20);
  v49 = v11 & (0x568u >> SHIBYTE(v11));
  v12 = *(_DWORD *)(v40 + 4LL * v49 + 12);
  v39 = v8 + 8 * v10;
  v48 = ((__int64 (*)(void))(v7 + *(_QWORD *)(v39 + HIWORD(v12) + 40)))();
  result = sub_632A360(a1: v8, a2: v14, a3: v50, a4: v13, a5: (unsigned int)v52, a6: v48);
  v16 = v41;
  if ( v41 == v8 )
  {
LABEL_21:
    sub_2771080();
LABEL_22:
    sub_2771220(a1: v24, a2: v25, a3: v51, a4: v26, a5: (unsigned int)v26);
LABEL_23:
    sub_2771220(a1: v31, a2: v32, a3: v43, a4: v33, a5: (unsigned int)v33);
    goto LABEL_24;
  }
  v17 = v51;
  v18 = *(unsigned int *)(v41 + 8);
  v19 = v52 - v50;
  v20 = *(_DWORD *)(v41 + 8) - v19 + 1;
  if ( (v51 & 0x80000000) != 0 || v20 <= (int)v51 )
  {
    v47 = *(_DWORD *)(v41 + 8) - v19 + 1;
    v34 = sub_632ACC0(a1: v41, a2: v51, a3: v8, a4: v18, a5: v51, a6: (unsigned int)v20);
    if ( v34 == v8 )
    {
LABEL_24:
      sub_2771080(a1: v41, a2: v51, a3: v42, a4: v35, a5: v47, a6: (unsigned int)v52);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_4F446C0();
    }
    sub_2769900(a1: v36, a2: v37, a3: v34, a4: v35, a5: &a7);
    goto LABEL_19;
  }
  v48 = *(_DWORD *)(v41 + 8);
  if ( v52 > (int)v50 )
  {
    v22 = (__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, __int64, _QWORD))(v7
                                                                             + *(_QWORD *)(v39
                                                                                         + HIWORD(*(_DWORD *)(v40 + 4LL * v49 + 12))));
    v47 = v50 + 1;
    v46 = v51 + 1;
    v23 = v22(a1: v41, a2: v51, a3: v42, a4: v40, a5: v50);
    v26 = v48;
    if ( v48 > v51 )
    {
      v27 = v41;
      *(_WORD *)(v41 + 2LL * v51 + 12) = v23;
      v21 = v47;
      for ( i = v46; ; i = v44 )
      {
        result = v39;
        v18 = v40;
        v19 = (unsigned __int64)v42;
        if ( v52 <= (int)v21 )
          break;
        v29 = (__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, _DWORD *))(v7
                                                                          + *(_QWORD *)(v39
                                                                                      + HIWORD(*(_DWORD *)(v40 + 4LL * v49 + 12))));
        v45 = v21 + 1;
        v44 = i + 1;
        v43 = i;
        v30 = v29(a1: v27, a2: v29, a3: v42, a4: v42);
        v33 = v48;
        if ( v48 <= v43 )
          goto LABEL_23;
        v27 = v41;
        *(_WORD *)(v41 + 2LL * v43 + 12) = v30;
        v21 = v45;
      }
      v17 = i;
      v16 = v41;
      goto LABEL_8;
    }
    goto LABEL_22;
  }
  v21 = v50;
LABEL_8:
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280(a1: v16, a2: v17, a3: v19, a4: v18, a5: v21);
  return result;
}
