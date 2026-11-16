// sub_181596B00
// rva 0x01596b00  size 1136  section .text  group text
// window base 0x181596b00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181596B00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 i; // rcx
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 result; // rax
  __int64 v40; // rdi
  __int64 v41; // rsi
  int v42; // edx
  int v43; // ecx
  int v44; // edi
  int v45; // esi
  int v46; // r8d
  int v47; // r9d
  __int64 v48; // [rsp+0h] [rbp-78h] BYREF
  __int64 v49; // [rsp+10h] [rbp-68h]
  __int64 v50; // [rsp+18h] [rbp-60h]
  __int64 v51; // [rsp+20h] [rbp-58h]
  __int64 v52; // [rsp+28h] [rbp-50h]
  __int64 v53; // [rsp+30h] [rbp-48h]
  __int64 v54; // [rsp+38h] [rbp-40h]
  __int64 v55; // [rsp+40h] [rbp-38h]
  __int64 v56; // [rsp+48h] [rbp-30h]
  int v57; // [rsp+54h] [rbp-24h]
  __int64 v58; // [rsp+58h] [rbp-20h]
  __int64 v59; // [rsp+60h] [rbp-18h]
  unsigned int v60; // [rsp+6Ch] [rbp-Ch]
  __int64 v61; // [rsp+70h] [rbp-8h]

  v56 = a6;
  if ( (unsigned __int64)&v48 <= *(_QWORD *)(v8 + 8) )
  {
    v55 = a5;
    v54 = a3;
    MEMORY[0x181EB84E0]();
  }
  else
  {
    i = 34161576;
    if ( *(_DWORD *)(a6 + 8) == 0 )
    {
      v61 = 34161576;
      v55 = a5;
      v54 = a3;
      v37 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v37 + 24) > *(_QWORD *)(v8 + 32) )
      {
        v37 = MEMORY[0x181EAA920](a1, a2, a3: v61, a4: 34161576);
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v37 + 24;
        *(_DWORD *)v37 = 34161576;
        *(_DWORD *)(v37 + 4) = 0;
        *(_QWORD *)(v37 + 8) = 0;
        *(_QWORD *)(v37 + 16) = 0;
      }
      *(_DWORD *)(v37 + 8) = 47045786;
LABEL_25:
      v49 = v37;
      v50 = MEMORY[0x181586CA0](a1, a2, a3: v37, a4: i);
      result = MEMORY[0x181588F00](a1: v7 + 376611336, a2: v7 + 376611424, a3: v54, a4: v38, a5: v55, a6: v50);
      if ( *(int *)(v8 + 16) <= 0 )
        return MEMORY[0x18277F280](a1: v40, a2: v41, a3: v49);
      return result;
    }
    v60 = *(_DWORD *)(a6 + 8);
    v10 = *(unsigned int *)(a6 + 12);
    v11 = v7 + 376366288;
    if ( (_DWORD)v10 != 0 )
    {
      v53 = v7 + 376366288;
      v61 = 34161576;
      v55 = a5;
      v54 = a3;
      v52 = v7 + 8 * v10;
      v12 = MEMORY[0x184F68C80](a1, a2: v11, a3: v52);
      v15 = *(_QWORD *)(v8 + 40);
      v59 = 35795224;
      if ( (unsigned __int64)(v15 + 56) > *(_QWORD *)(v8 + 32) )
      {
        v51 = v12;
        v15 = MEMORY[0x181EAA920](a1: v13, a2: v14, a3: v59);
        v12 = v51;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v15 + 56;
        *(_DWORD *)v15 = 35795224;
        *(_DWORD *)(v15 + 4) = 0;
        *(_QWORD *)(v15 + 8) = 0;
        *(_QWORD *)(v15 + 16) = 0;
        *(_QWORD *)(v15 + 24) = 0;
        *(_QWORD *)(v15 + 32) = 0;
        *(_QWORD *)(v15 + 40) = 0;
        *(_QWORD *)(v15 + 48) = 0;
      }
      v16 = *(_QWORD *)(v8 + 40);
      v17 = v16 + 16;
      v18 = 35794392;
      v58 = 35794392;
      if ( (unsigned __int64)(v16 + 16) > *(_QWORD *)(v8 + 32) )
      {
        v50 = v15;
        v51 = v12;
        v19 = MEMORY[0x181EAA920](a1: v17, a2: v14, a3: v58);
        v15 = v50;
        v12 = v51;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v17;
        *(_DWORD *)v16 = 35794392;
        *(_DWORD *)(v16 + 4) = 0;
        *(_QWORD *)(v16 + 8) = 0;
        v19 = v16;
      }
      *(_DWORD *)(v19 + 4) = (unsigned __int64)(v12 - v7) >> 3;
      v49 = v7 + 376612936;
      v51 = v12;
      v50 = v15;
      MEMORY[0x181587F60](a1: 1, a2: v15, a3: v15, a4: v18, a5: v7 + 376612936);
      v23 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v23 + 24) > *(_QWORD *)(v8 + 32) )
      {
        v23 = MEMORY[0x181EAA920](a1: v21, a2: v22, a3: v61);
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v23 + 24;
        *(_DWORD *)v23 = 34161576;
        *(_DWORD *)(v23 + 4) = 0;
        *(_QWORD *)(v23 + 8) = 0;
        *(_QWORD *)(v23 + 16) = 0;
      }
      v51 = v23;
      *(_DWORD *)(v23 + 8) = 47045786;
      *(_DWORD *)(v23 + 4) = 1;
      MEMORY[0x1857881C0](a1: 0, a2: v22, a3: v23, a4: v20, a5: v50, a6: v53);
      for ( i = 1; ; i = (unsigned int)(v57 + 1) )
      {
        v36 = v56;
        if ( (int)v60 <= (int)i )
          break;
        if ( v60 <= (unsigned int)i )
          goto LABEL_35;
        v24 = *(unsigned int *)(v56 + 4 * i + 12);
        v25 = v7 + 8 * v24;
        if ( (_DWORD)v24 == 0 )
          goto LABEL_36;
        v57 = i;
        v50 = v7 + 8 * v24;
        v26 = MEMORY[0x184F68C80](a1: v24, a2, a3: v50);
        v30 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v30 + 56) > *(_QWORD *)(v8 + 32) )
        {
          v52 = v26;
          v30 = MEMORY[0x181EAA920](a1: v28, a2: v29, a3: v59);
          v26 = v52;
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v30 + 56;
          *(_DWORD *)v30 = 35795224;
          *(_DWORD *)(v30 + 4) = 0;
          *(_QWORD *)(v30 + 8) = 0;
          *(_QWORD *)(v30 + 16) = 0;
          *(_QWORD *)(v30 + 24) = 0;
          *(_QWORD *)(v30 + 32) = 0;
          *(_QWORD *)(v30 + 40) = 0;
          *(_QWORD *)(v30 + 48) = 0;
        }
        v31 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v31 + 16) > *(_QWORD *)(v8 + 32) )
        {
          v53 = v30;
          v52 = v26;
          v32 = MEMORY[0x181EAA920](a1: v28, a2: v29, a3: v58);
          v30 = v53;
          v26 = v52;
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v31 + 16;
          *(_DWORD *)v31 = 35794392;
          *(_DWORD *)(v31 + 4) = 0;
          *(_QWORD *)(v31 + 8) = 0;
          v32 = v31;
        }
        *(_DWORD *)(v32 + 4) = (unsigned __int64)(v26 - v7) >> 3;
        v52 = v26;
        v53 = v30;
        MEMORY[0x181587F60](a1: 1, a2: v29, a3: v30, a4: v27, a5: v49);
        v33 = v51;
        ++*(_DWORD *)(v51 + 4);
        MEMORY[0x1857881C0](
          a1: *(unsigned int *)(v33 + 12),
          a2: v35,
          a3: v33,
          a4: v34,
          a5: v53,
          a6: v7 + 8LL * *(unsigned int *)(v33 + 8));
      }
      v37 = v51;
      goto LABEL_25;
    }
  }
  v55 = a5;
  v54 = a3;
  MEMORY[0x182771080](a1, a2: v11, a3, a4: i);
LABEL_35:
  v57 = i;
  MEMORY[0x182771220](a1, a2, a3: (unsigned int)i, a4: i, a5: v60, a6: v36);
LABEL_36:
  MEMORY[0x182771080](a1: v24, a2, a3: v51, a4: i, a5: v25, a6: v36);
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
  return sub_181596F80(a1: v44, a2: v45, a3: v42, a4: v43, a5: v46, a6: v47, a7);
}
