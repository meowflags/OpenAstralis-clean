// sub_181EA2360
// rva 0x01ea2360  size 410  section .text  group text
// window base 0x181ea2360: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA2360(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  _QWORD *v6; // r14
  __int64 v7; // r15
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 result; // rax
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // r8
  __int64 v42; // r9
  char v43; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v44; // [rsp+8h] [rbp-40h]
  _QWORD *v45; // [rsp+10h] [rbp-38h]
  _QWORD *v46; // [rsp+18h] [rbp-30h]
  _QWORD *v47; // [rsp+20h] [rbp-28h]
  __int64 v48; // [rsp+28h] [rbp-20h]
  __int64 v49; // [rsp+30h] [rbp-18h]
  __int64 v50; // [rsp+38h] [rbp-10h]
  __int64 v51; // [rsp+40h] [rbp-8h]

  v8 = v6 + 47076610;
  if ( (unsigned __int64)&v43 <= *(_QWORD *)(v7 + 8) )
  {
    v47 = a2;
    v46 = a1;
    sub_181EB83C0((_DWORD)a1, (_DWORD)a2, a3, a4: (_DWORD)v8, a5, a6, a7: v43);
  }
  else if ( a1 != v6 )
  {
    v9 = v6[47081965] - v6[47081964];
    if ( a2 == v6 )
    {
LABEL_15:
      v51 = v9;
      v46 = a1;
      MEMORY[0x18276EFE0](a1, a2, a3, a4: v8);
      goto LABEL_16;
    }
    v10 = v6[47081925] - v6[47081924];
    v11 = v10 + v9;
    if ( v10 + v9 == 0 )
    {
LABEL_16:
      MEMORY[0x18276E7E0](a1, a2, a3: v10, a4: v8);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_181EA2500(a1: v39, a2: v40, a3: v37, a4: v38, a5: v41, a6: v42);
    }
    v12 = v11 / 2 + 100 * v9;
    if ( v12 != 0x8000000000000000LL )
    {
      v49 = v6[47081925] - v6[47081924];
      v51 = v9;
LABEL_7:
      v48 = v12 / v11;
      v50 = v10 + v9;
      v45 = v6 + 46312510;
      v44 = v6 + 46631863;
      v47 = a2;
      v46 = a1;
      goto LABEL_8;
    }
    v50 = v10 + v9;
    v49 = v10;
    v51 = v9;
    v45 = v6 + 46312510;
    v44 = v6 + 46631863;
    v47 = a2;
    v46 = a1;
    if ( v11 != -1 )
      goto LABEL_7;
    v48 = 0x8000000000000000LL;
LABEL_8:
    v13 = MEMORY[0x1820841E0](a1, a2, a3: v8);
    v17 = MEMORY[0x182084840](a1: v15, a2: v16, a3: v13, a4: v14, a5: v44);
    v21 = MEMORY[0x182084840](a1: v19, a2: v20, a3: v17, a4: v18, a5: v45);
    v25 = MEMORY[0x182084840](a1: v23, a2: v24, a3: v21, a4: v22, a5: v6 + 46554619);
    v29 = MEMORY[0x1820845C0](a1: v27, a2: v28, a3: v25, a4: v26, a5: v48);
    result = MEMORY[0x182084840](a1: v31, a2: v32, a3: v29, a4: v30, a5: v6 + 46607027);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v35, a2: v36, a3: v34, a4: v48);
    return result;
  }
  v47 = a2;
  v9 = MEMORY[0x18276EFE0](a1, a2, a3, a4: v8);
  goto LABEL_15;
}
