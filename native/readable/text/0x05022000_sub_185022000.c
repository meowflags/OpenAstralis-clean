// sub_5022000
// rva 0x05022000  size 557  section .text  group text
// window base 0x185022000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5022000(unsigned int a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 result; // rax
  _DWORD *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // ebx
  unsigned int v20; // ecx
  __int16 v21; // ax
  __int64 v22; // rbp
  _DWORD *v23; // r9
  __int64 (__fastcall *v24)(__int64, __int64, _DWORD *, _DWORD *, _QWORD); // rbx
  __int16 v25; // ax
  __int64 v26; // [rsp+0h] [rbp-48h] BYREF
  __int64 v27; // [rsp+8h] [rbp-40h]
  _DWORD *v28; // [rsp+10h] [rbp-38h]
  _DWORD *v29; // [rsp+18h] [rbp-30h]
  _DWORD *v30; // [rsp+20h] [rbp-28h]
  int v31; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v32; // [rsp+30h] [rbp-18h]
  unsigned int v33; // [rsp+34h] [rbp-14h]
  unsigned int v34; // [rsp+38h] [rbp-10h]
  unsigned int v35; // [rsp+3Ch] [rbp-Ch]
  unsigned int v36; // [rsp+40h] [rbp-8h]
  unsigned int v37; // [rsp+44h] [rbp-4h]

  v30 = a6;
  v37 = a2;
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v8 + 8) )
  {
    v36 = a1;
    v35 = a5;
    sub_1EB84E0();
    goto LABEL_14;
  }
  v29 = a3;
  if ( a3 == v7 )
  {
LABEL_14:
    v36 = a1;
    sub_2771080();
    goto LABEL_15;
  }
  v36 = a1;
  v9 = a3[2] >> 1;
  v35 = a5;
  v34 = a2 + a5 - a1;
  v33 = v9;
  result = sub_632A360(a1: v7 + 94160866, a2, a3: a5, a4: v9, a5: v34, a6: (unsigned int)v9);
  v13 = v37;
  if ( (int)v37 > (int)v36 )
  {
    v16 = v35 + 1;
    if ( v30 != v7 )
    {
      v17 = (unsigned __int16)v7[2 * v7[2 * (*v30 >> 3) + 5]
                               + 3
                               + (v7[2 * (*v30 >> 3) + 11] & (0x568u >> HIBYTE(v7[2 * (*v30 >> 3) + 11])))];
      if ( (_DWORD)v17 == 1384 )
      {
        v33 = v35 + 1;
        v18 = *v30 >> 3;
        v19 = v7[2 * v18 + 11];
        v28 = &v7[2 * v7[2 * v18 + 5]];
        v34 = v19 & (0x568u >> SHIBYTE(v19));
        v20 = v28[v34 + 3];
        v27 = (__int64)&v7[2 * v18];
        v21 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, _DWORD *, _QWORD, _QWORD))(v6 + *(_QWORD *)(v27 + HIWORD(v20))))(
                a1: v28,
                a2: v37,
                a3: v30,
                a4: *(_QWORD *)(v27 + HIWORD(v20)),
                a5: v36);
        *(_WORD *)((char *)v29 + (int)(2 * v35) + 12) = v21;
        v14 = v36 + 1;
        v15 = v33;
        result = v27;
        v22 = v34;
        v13 = v37;
        v23 = v30;
        v11 = v28;
        while ( (int)v13 > (int)v14 )
        {
          v24 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _QWORD))(v6
                                                                                     + *(_QWORD *)(result
                                                                                                 + HIWORD(v11[v22 + 3])));
          v33 = v15;
          v32 = v15 + 1;
          v31 = v14;
          v25 = v24(a1: v14, a2: v13, a3: v23, a4: v11, a5: (unsigned int)v14);
          *(_WORD *)((char *)v29 + (int)(2 * v33) + 12) = v25;
          v14 = (unsigned int)(v31 + 1);
          v15 = v32;
          result = v27;
          v22 = v34;
          v11 = v28;
          v13 = v37;
          v23 = v30;
        }
        goto LABEL_5;
      }
LABEL_16:
      sub_2770780(a1: v36, a2: v13, a3: v29, a4: v17, a5: v16);
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
      return sub_5022240();
    }
LABEL_15:
    v33 = v16;
    sub_2771080(a1: v12, a2: v13, a3: v29);
    goto LABEL_16;
  }
  v14 = v36;
  v15 = v35;
LABEL_5:
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280(a1: v14, a2: v13, a3: v29, a4: v11, a5: v15);
  return result;
}
