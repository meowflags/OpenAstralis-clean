// sub_4F3B300
// rva 0x04f3b300  size 559  section .text  group text
// window base 0x184f3b300: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F3B300(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // ebp
  unsigned int v14; // r10d
  __int64 v15; // r11
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rsi
  __int64 v19; // rcx
  int v20; // r10d
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // r9
  int v29; // edx
  int v30; // ecx
  int v31; // edi
  int v32; // esi
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // [rsp+0h] [rbp-38h] BYREF
  __int64 v36; // [rsp+8h] [rbp-30h]
  __int64 v37; // [rsp+10h] [rbp-28h]
  unsigned int v38; // [rsp+1Ch] [rbp-1Ch]
  unsigned int v39; // [rsp+20h] [rbp-18h]
  unsigned int v40; // [rsp+24h] [rbp-14h]
  int v41; // [rsp+28h] [rbp-10h]
  unsigned int v42; // [rsp+2Ch] [rbp-Ch]
  int v43; // [rsp+30h] [rbp-8h]
  unsigned int v44; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v8 + 8) )
  {
    v41 = a6;
    sub_1EB84E0();
    goto LABEL_23;
  }
  v37 = a3;
  v44 = a5;
  v9 = *(unsigned int *)(a3 + 4);
  v10 = *(_DWORD *)(a3 + 8);
  v11 = *(char *)(a3 + 12);
  v12 = v11 | ((255 - a5) >> 31);
  v13 = (char)(*(_BYTE *)(a3 + 12) | ((int)(255 - a5) < 0));
  v14 = v10 + a6;
  v43 = v10 + a6;
  v15 = v7 + 8 * v9;
  if ( v11 != v13 )
  {
    v42 = v11 | ((255 - a5) >> 31);
    goto LABEL_4;
  }
  v42 = v11 | ((255 - a5) >> 31);
  v12 = v13;
  v18 = (__int64)(int)v14 << v13;
  if ( (_DWORD)v9 == 0 )
  {
LABEL_23:
    sub_2771080(a1: v9, a2: v18);
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
    return sub_4F3B540(a1: v31, a2: v32, a3: v29, a4: v30, a5: v33, a6: v34, a7);
  }
  v17 = *(unsigned int *)(v7 + 8 * v9 + 8);
  if ( v18 > v17 )
  {
LABEL_4:
    v41 = a6;
    v38 = v11;
    v36 = v15;
    v39 = v10;
    v40 = v13;
    v16 = sub_4F38CC0(a1: v14, a2: v13, a3: v15, a4: v12, a5: v11, a6: v10);
    v19 = v37;
    *(_DWORD *)(v37 + 4) = (unsigned __int64)(v16 - v7) >> 3;
    if ( (*(_DWORD *)v19 & 2) != 0 )
    {
      v28 = (v19 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - v28) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - v28) >> 9) + 0x38) = 0;
    }
    *(_BYTE *)(v19 + 12) = v42;
    v11 = v40;
    goto LABEL_6;
  }
  v40 = v13;
  v39 = v10;
  v41 = a6;
  v19 = a3;
  v16 = v15;
LABEL_6:
  v36 = v16;
  if ( v11 != 0 )
  {
    v20 = v43;
    if ( v43 > (int)v39 )
    {
      v42 = v11;
      sub_501CF00(a1: v17, a2: v18, a3: v39, a4: v19, a5: v16);
      v21 = v44;
      v25 = v36;
      *(_WORD *)(v36 + (int)(2 * v39) + 12) = v44;
      v26 = v39 + 1;
      while ( 1 )
      {
        v20 = v43;
        if ( v43 <= (int)v26 )
          break;
        v38 = v26;
        sub_501CF00(a1: v17, a2: v18, a3: v26, a4: (unsigned int)v26, a5: v25);
        v21 = v44;
        v27 = v36;
        *(_WORD *)(v36 + (int)(2 * v38) + 12) = v44;
        v26 = v38 + 1;
        v25 = v27;
      }
      v23 = v25;
      v22 = v37;
    }
    else
    {
      v42 = v11;
      v21 = v44;
      v22 = v19;
      v23 = v16;
    }
  }
  else
  {
    v42 = 0;
    sub_57A10A0(a1: (unsigned int)(char)v44, a2: v18, a3: v16, a4: v19, a5: v39, a6: (unsigned int)v43);
    v23 = v36;
    v20 = v43;
    v21 = v44;
    v22 = v37;
  }
  *(_DWORD *)(v22 + 8) = v20;
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280(a1: v17, a2: v18, a3: v22, a4: v23, a5: v21);
  return v22;
}
