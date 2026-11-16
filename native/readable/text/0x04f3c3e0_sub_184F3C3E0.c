// sub_4F3C3E0
// rva 0x04f3c3e0  size 618  section .text  group text
// window base 0x184f3c3e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F3C3E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  __int64 v6; // rbx
  unsigned int v7; // r12d
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // r9d
  __int64 v17; // rsi
  int v18; // r8d
  __int64 v19; // rcx
  unsigned int v20; // r10d
  unsigned int v21; // r11d
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v29; // r9
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // r9
  __int64 v32; // [rsp+0h] [rbp-48h] BYREF
  __int64 v33; // [rsp+10h] [rbp-38h]
  __int64 v34; // [rsp+18h] [rbp-30h]
  __int64 v35; // [rsp+20h] [rbp-28h]
  unsigned int v36; // [rsp+28h] [rbp-20h]
  int v37; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v38; // [rsp+30h] [rbp-18h]
  int v39; // [rsp+34h] [rbp-14h]
  unsigned int v40; // [rsp+38h] [rbp-10h]
  int v41; // [rsp+3Ch] [rbp-Ch]
  int v42; // [rsp+40h] [rbp-8h]
  unsigned int v43; // [rsp+44h] [rbp-4h]

  v35 = a3;
  v34 = a1;
  if ( (unsigned __int64)&v32 <= *(_QWORD *)(v9 + 8) )
  {
    v40 = a5;
    sub_1EB84E0();
LABEL_20:
    sub_2771080(a1: v12, a2: v11, a3: v35);
    goto LABEL_21;
  }
  v43 = *(char *)(a3 + 12);
  v10 = *(unsigned int *)(a3 + 8);
  v42 = v10;
  if ( (int)v10 < a6 )
    JUMPOUT(0x309E52410LL);
  LODWORD(v6) = a6;
  v41 = a6;
  v40 = a5;
  sub_632A360(a1: v8 + 376643464, a2, a3: a5, a4: v10, a5: (unsigned int)a6, a6: (unsigned int)v10);
  v12 = v34;
  if ( v34 == v8 )
    goto LABEL_20;
  v13 = *(unsigned int *)(v34 + 4);
  if ( (_DWORD)v13 == 0 )
  {
LABEL_21:
    sub_2771080(a1: v12, a2: v11, a3: v35);
    goto LABEL_22;
  }
  LODWORD(v6) = v41;
  v14 = v43;
  v15 = v35;
  v16 = *(char *)(v34 + 12);
  v17 = *(unsigned int *)(v35 + 4);
  v18 = *(_DWORD *)(v8 + 8 * v13 + 8) >> *(_BYTE *)(v34 + 12);
  v19 = v42 + v18 - (v41 - v40);
  v39 = v42 + v18 - (v41 - v40);
  v20 = v16 | v43;
  v21 = (char)(v16 | v43);
  if ( v43 == v21 )
  {
    v29 = (int)v19;
    v7 = v42 + v18 - (v41 - v40);
    v19 = v21;
    v30 = v29 << v21;
    if ( (_DWORD)v17 == 0 )
    {
LABEL_23:
      sub_2771080(a1: v12, a2: (unsigned int)v6, a3: v15, a4: v7);
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
      return sub_4F3C660();
    }
    if ( v30 <= *(unsigned int *)(v8 + 8 * v17 + 8) )
    {
      v36 = v21;
      v24 = v42 + v18 - (v41 - v40);
      v37 = v18;
      v6 = v8 + 8 * v17;
      goto LABEL_9;
    }
    v38 = v20;
  }
  else
  {
    v38 = v16 | v43;
    v7 = v42 + v18 - (v41 - v40);
  }
  v37 = v18;
  v33 = v8 + 8 * v17;
  v36 = v21;
  v22 = sub_4F38CC0(a1: v7, a2: v21, a3: v33, a4: v19, a5: v43, a6: v42);
  v23 = v35;
  *(_DWORD *)(v35 + 4) = (unsigned __int64)(v22 - v8) >> 3;
  if ( (*(_DWORD *)v23 & 2) != 0 )
  {
    v31 = (v23 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v31) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v31) >> 9) + 0x38) = 0;
  }
  *(_BYTE *)(v23 + 12) = v38;
  v6 = v22;
  v14 = v36;
  v24 = v39;
LABEL_9:
  if ( v6 == v8 )
  {
LABEL_22:
    sub_2771080();
    goto LABEL_23;
  }
  v38 = v24 - v42;
  v43 = v14;
  v33 = v6;
  sub_1EB4960(
    a1: (unsigned int)((v41 + v24 - v42) << v14),
    a2: (unsigned int)((v42 - v41) << v14),
    a3: v6,
    a4: v14,
    a5: (unsigned int)(v41 << v14),
    a6: v6);
  sub_4FF2C40(a1: v43, a2: v26, a3: v34, a4: v25, a5: v33, a6: v40);
  v27 = v35;
  *(_DWORD *)(v35 + 8) = v39;
  *(_BYTE *)(v27 + 13) = 1;
  if ( *(int *)(v9 + 16) <= 0 )
    sub_277F280();
  return v27;
}
