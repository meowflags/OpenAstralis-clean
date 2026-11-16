// sub_5033080
// rva 0x05033080  size 479  section .text  group text
// window base 0x185033080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5033080(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // ebp
  __int64 v12; // rbx
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  __int64 v15; // r8
  int v16; // r10d
  int v17; // r11d
  int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // r9
  unsigned int v21; // edx
  int v23; // edx
  int v24; // ecx
  int v25; // edi
  int v26; // esi
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // [rsp+0h] [rbp-78h] BYREF
  int v30; // [rsp+14h] [rbp-64h]
  int v31; // [rsp+18h] [rbp-60h]
  int v32; // [rsp+1Ch] [rbp-5Ch]
  __int64 v33; // [rsp+20h] [rbp-58h]
  __int64 v34; // [rsp+28h] [rbp-50h]
  __int64 v35; // [rsp+30h] [rbp-48h]
  __int64 v36; // [rsp+38h] [rbp-40h]
  __int64 v37; // [rsp+40h] [rbp-38h]
  int v38; // [rsp+48h] [rbp-30h]
  int v39; // [rsp+4Ch] [rbp-2Ch]
  int v40; // [rsp+50h] [rbp-28h]
  int v41; // [rsp+54h] [rbp-24h]
  __int64 v42; // [rsp+58h] [rbp-20h]
  unsigned int v43; // [rsp+64h] [rbp-14h]
  int v44; // [rsp+68h] [rbp-10h]
  unsigned int v45; // [rsp+6Ch] [rbp-Ch]
  __int64 v46; // [rsp+70h] [rbp-8h]

  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    return sub_5033260(a1: v25, a2: v26, a3: v23, a4: v24, a5: v27, a6: v28, a7);
  }
  else
  {
    v36 = a3;
    v9 = *(_QWORD *)(a3 + 16);
    v46 = v9;
    v10 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v10 != 0 )
    {
      if ( v9 < 0 )
      {
        v11 = 0;
        v12 = 0;
      }
      else
      {
        v11 = 1;
        v12 = v9;
      }
    }
    else
    {
      v11 = 0;
      v12 = 0;
    }
    v13 = *(_QWORD *)(v8 + 40);
    v14 = *(_QWORD *)(v8 + 32);
    v15 = *(unsigned int *)(a3 + 24);
    v45 = *(_DWORD *)(a3 + 12);
    v16 = *(char *)(a3 + 41);
    v17 = *(char *)(a3 + 40);
    v18 = *(_DWORD *)(a3 + 28);
    v19 = *(_QWORD *)(a3 + 32);
    v20 = *(unsigned int *)(a3 + 8);
    v35 = v7 + 8 * v15;
    v34 = v7 + 8 * v10;
    v44 = (unsigned __int8)v16;
    v43 = (unsigned __int8)v17;
    v33 = v7 + 8 * v20;
    if ( v13 + 56 > v14 )
    {
      v32 = v20;
      v42 = v19;
      v41 = v18;
      v40 = v17;
      v39 = v16;
      v31 = v15;
      v38 = v11;
      v37 = v12;
      v30 = v10;
      v13 = sub_1EAA920(a1: v14, a2: v13, a3: 43306784);
      LODWORD(v20) = v32;
      v19 = v42;
      v18 = v41;
      LOBYTE(v17) = v40;
      LOBYTE(v16) = v39;
      v21 = v45;
      LODWORD(v15) = v31;
      LOBYTE(v11) = v38;
      v12 = v37;
      LODWORD(v10) = v30;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v13 + 56;
      *(_DWORD *)v13 = 43306784;
      *(_DWORD *)(v13 + 4) = 0;
      *(_QWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 16) = 0;
      *(_QWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 32) = 0;
      *(_QWORD *)(v13 + 40) = 0;
      *(_QWORD *)(v13 + 48) = 0;
      v21 = v45;
    }
    *(_DWORD *)(v13 + 40) = v18;
    *(_QWORD *)(v13 + 32) = v19;
    *(_DWORD *)(v13 + 28) = v15;
    *(_BYTE *)(v13 + 26) = v17;
    *(_BYTE *)(v13 + 25) = v16;
    *(_BYTE *)(v13 + 24) = v11;
    *(_QWORD *)(v13 + 16) = v12;
    *(_DWORD *)(v13 + 12) = v21;
    *(_DWORD *)(v13 + 8) = v20;
    *(_DWORD *)(v13 + 4) = v10;
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280(a1: v33, a2: v13, a3: v43, a4: v34, a5: v46, a6: v21);
    return v13;
  }
}
