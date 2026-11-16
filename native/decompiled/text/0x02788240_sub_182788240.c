// sub_182788240
// rva 0x02788240  size 614  section .text  group text
// window base 0x182788240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182788240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 result; // rax
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 i; // rcx
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // [rsp+0h] [rbp-48h] BYREF
  __int64 v45; // [rsp+8h] [rbp-40h]
  __int64 v46; // [rsp+10h] [rbp-38h]
  int v47; // [rsp+1Ch] [rbp-2Ch]
  __int64 v48; // [rsp+20h] [rbp-28h]
  int v50; // [rsp+30h] [rbp-18h]
  unsigned int v51; // [rsp+34h] [rbp-14h]
  __int64 *v52; // [rsp+38h] [rbp-10h]
  unsigned int *v53; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)&v44 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB83C0]();
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
    __builtin_debugtrap();
    return sub_1827884C0();
  }
  else
  {
    v46 = a3;
    v45 = v6 + 376612120;
    v53 = (unsigned int *)*a6;
    v8 = *v53;
    v52 = a6;
    v51 = v8;
    v9 = MEMORY[0x182084840](a1, a2, a3: v6 + 376612120, a4: v53, a5: v6 + 351975288);
    v13 = MEMORY[0x182084560](a1: v11, a2: v12, a3: v9, a4: v10, a5: v51);
    v17 = MEMORY[0x182084840](a1: v15, a2: v16, a3: v13, a4: v14, a5: v6 + 372990000);
    switch ( v51 )
    {
      case 0xC0000005:
        v21 = v6 + 370954168;
        break;
      case 0xC0000006:
        v21 = v6 + 370954104;
        break;
      case 0xC00000FD:
        v21 = v6 + 370953984;
        break;
      default:
        v21 = v6 + 366464688;
        break;
    }
    v22 = MEMORY[0x182084840](a1: v19, a2: v20, a3: v17, a4: v18, a5: v21);
    MEMORY[0x182084840](a1: v24, a2: v25, a3: v22, a4: v23, a5: v6 + 372674176);
    result = v53[6];
    v50 = v53[6];
    if ( (v51 == -1073741819 || v51 == -1073741818) && (int)result >= 2 )
    {
      v30 = *((_QWORD *)v53 + 4);
      v48 = v30;
      if ( v30 != 0 )
      {
        if ( v30 == 1 )
        {
          MEMORY[0x182084840](a1: v27, a2: v28, a3: v45, a4: v53, a5: v6 + 372611192);
        }
        else if ( v30 == 8 )
        {
          MEMORY[0x182084840](a1: v27, a2: v28, a3: v45, a4: v53, a5: v6 + 372635504);
        }
        else
        {
          v31 = MEMORY[0x182084840](a1: v27, a2: v28, a3: v45, a4: v53, a5: v6 + 372643056);
          MEMORY[0x182084B80](a1: v33, a2: v34, a3: v31, a4: v32, a5: v48);
        }
      }
      else
      {
        MEMORY[0x182084840](a1: v27, a2: v28, a3: v45, a4: v53, a5: v6 + 372619920);
      }
      MEMORY[0x182084840](a1: v36, a2: v37, a3: v45, a4: v35, a5: v6 + 373055288);
      result = MEMORY[0x1815A0060](a1: v38, a2: v39, a3: v45, a4: v53, a5: *((_QWORD *)v53 + 5));
    }
    else if ( v50 >= 1 )
    {
      MEMORY[0x182084840](a1: v27, a2: v28, a3: v45, a4: v53, a5: v6 + 372643056);
      for ( i = 0; ; i = (unsigned int)(v47 + 1) )
      {
        result = (unsigned int)v50;
        if ( v50 <= (int)i )
          break;
        v47 = i;
        v41 = MEMORY[0x182084840](a1: v27, a2: v28, a3: v45, a4: i, a5: v6 + 373055288);
        MEMORY[0x182084B80](a1: v42, a2: v43, a3: v41, a4: v53, a5: *(_QWORD *)&v53[2 * v47 + 8]);
      }
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_18277F280(a1: v27, a2: v28, a3: v26, a4: (__int64)v53);
  }
  return result;
}
