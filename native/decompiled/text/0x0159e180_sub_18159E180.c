// sub_18159E180
// rva 0x0159e180  size 649  section .text  group text
// window base 0x18159e180: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159E180(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // edx
  int v17; // ecx
  int v18; // edi
  int v19; // esi
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // [rsp+0h] [rbp-48h] BYREF
  __int64 v23; // [rsp+8h] [rbp-40h]
  __int64 v24; // [rsp+10h] [rbp-38h]
  __int64 v25; // [rsp+18h] [rbp-30h]
  unsigned __int64 v26; // [rsp+20h] [rbp-28h]
  unsigned __int64 v27; // [rsp+28h] [rbp-20h]
  int v28; // [rsp+30h] [rbp-18h]
  int v29; // [rsp+34h] [rbp-14h]
  int v30; // [rsp+38h] [rbp-10h]
  unsigned int v31; // [rsp+3Ch] [rbp-Ch]
  int v32; // [rsp+40h] [rbp-8h]
  int v33; // [rsp+44h] [rbp-4h]

  v24 = a5;
  v33 = a6;
  v32 = a1;
  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB83C0]();
    MEMORY[0x18276E7E0]();
LABEL_25:
    v25 = v12;
    MEMORY[0x1828C1D60]();
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
    return sub_18159E420(a1: v18, a2: v19, a3: v16, a4: v17, a5: v20, a6: v21, a7);
  }
  else
  {
    v31 = ((int)a1 >> 8) & 0xFFF;
    if ( 1 << a1 != 1 )
      JUMPOUT(0x302B2A1CELL);
    v9 = 8;
    v30 = 8;
    v29 = 1;
    v23 = v7 + 376612120;
    v10 = 1;
    if ( a6 > 8 )
      JUMPOUT(0x302B2A1FBLL);
    result = (unsigned int)a6;
    v28 = a6;
    v27 = (unsigned int)a6 + (unsigned __int64)v31;
    if ( v27 > v31 )
    {
      v26 = v31;
      v25 = 1;
      MEMORY[0x182084AC0](a1, a2: 1, a3: v23, a4: 8, a5: (unsigned int)*(char *)(a5 + v31));
      while ( 1 )
      {
        MEMORY[0x1820846E0](a1: v14, a2: v15, a3: v23, a4: v13, a5: 1);
        result = (unsigned int)v29;
        v26 += v25;
        v12 = v26;
        if ( v27 <= v26 )
          break;
        switch ( v29 )
        {
          case 1:
            MEMORY[0x182084AC0](a1, a2: v10, a3: v23, a4: v9, a5: (unsigned int)*(char *)(v24 + v26));
            break;
          case 2:
            MEMORY[0x182084C00](a1, a2: v10, a3: v23, a4: v9, a5: (unsigned int)*(__int16 *)(v24 + v26));
            break;
          case 4:
            MEMORY[0x182084B20](a1, a2: v10, a3: v23, a4: v9, a5: *(unsigned int *)(v24 + v26));
            break;
          case 8:
            MEMORY[0x182084B80](a1, a2: v10, a3: v23, a4: *(_QWORD *)(v24 + v26), a5: *(_QWORD *)(v24 + v26));
            break;
          default:
            goto LABEL_25;
        }
      }
      a6 = v33;
    }
    else
    {
      v26 = v31;
    }
    if ( a6 > v28 )
      result = MEMORY[0x182084840](a1, a2: v10, a3: v23, a4: v9, a5: v7 + 372583424);
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
