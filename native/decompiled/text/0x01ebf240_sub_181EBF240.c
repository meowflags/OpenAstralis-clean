// sub_181EBF240
// rva 0x01ebf240  size 478  section .text  group text
// window base 0x181ebf240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EBF240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  char v27; // [rsp+0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+8h] [rbp-30h]
  __int64 v29; // [rsp+10h] [rbp-28h]
  unsigned int v30; // [rsp+1Ch] [rbp-1Ch]
  __int64 v31; // [rsp+20h] [rbp-18h]
  __int64 v32; // [rsp+28h] [rbp-10h]
  unsigned int v33; // [rsp+30h] [rbp-8h]
  unsigned int v34; // [rsp+34h] [rbp-4h]

  v32 = a3;
  v31 = a5;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v27);
    goto LABEL_18;
  }
  v8 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v8 != 0 && *(_DWORD *)(v6 + 8 * v8 + 8) != 0 )
  {
    MEMORY[0x184F35F80](a1, a2, a3: a5, a4, a5: 91);
    v13 = v32;
    v14 = *(unsigned int *)(v32 + 4);
    if ( (_DWORD)v14 != 0 )
    {
      v15 = *(_QWORD *)(v7 + 40);
      v16 = v15 + 32;
      if ( (unsigned __int64)(v15 + 32) > *(_QWORD *)(v7 + 32) )
      {
        v30 = *(_DWORD *)(v32 + 4);
        v15 = sub_181EAA920(a1: v11, a2: v12, a3: 40466704);
        v14 = v30;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v16;
        *(_DWORD *)v15 = 40466704;
        *(_DWORD *)(v15 + 4) = 0;
        *(_QWORD *)(v15 + 8) = 0;
        *(_QWORD *)(v15 + 16) = 0;
        *(_QWORD *)(v15 + 24) = 0;
      }
      *(_BYTE *)(v15 + 20) = 1;
      *(_DWORD *)(v15 + 12) = -1;
      *(_DWORD *)(v15 + 4) = v14;
      v29 = v6 + 8 * v14;
      v17 = MEMORY[0x185BED6C0](a1: v11, a2: v12, a3: v15, a4: v16, a5: 0);
      v20 = *(_QWORD *)(v7 + 40);
      if ( (unsigned __int64)(v20 + 24) > *(_QWORD *)(v7 + 32) )
      {
        v28 = v17;
        v21 = sub_181EAA920(a1: v18, a2: v19, a3: 40467064);
        v17 = v28;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v20 + 24;
        *(_DWORD *)v20 = 40467064;
        *(_DWORD *)(v20 + 4) = 0;
        *(_QWORD *)(v20 + 8) = 0;
        *(_QWORD *)(v20 + 16) = 0;
        v21 = v20;
      }
      v22 = v32;
      *(_DWORD *)(v21 + 8) = (unsigned __int64)(v31 - v6) >> 3;
      *(_DWORD *)(v21 + 4) = (unsigned __int64)(v22 - v6) >> 3;
      MEMORY[0x185B7FF60](a1: v18, a2: v19, a3: v17, a4: v21, a5: v21);
      v34 = *(_DWORD *)(v31 + 8);
      v33 = v34 - 2;
      MEMORY[0x184F3C3E0](a1: v6 + 365347544, a2: v23, a3: v31, a4: v33, a5: v33, a6: v34);
      if ( *(int *)(v7 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v25, a2: v26, a3: v24, a4: v33);
      return v31;
    }
LABEL_18:
    MEMORY[0x182771080](a1: v11, a2: v12, a3: v13, a4: v10, a5: v31);
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181EBF420();
  }
  MEMORY[0x184F36F80](a1, a2, a3: v31, a4, a5: v6 + 365376648);
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v31;
}
