// sub_181EB3760
// rva 0x01eb3760  size 742  section .text  group text
// window base 0x181eb3760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_181EB3760(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, unsigned int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  unsigned __int64 i; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbp
  unsigned __int64 j; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v17; // rbx
  char v18; // [rsp+0h] [rbp-28h] BYREF
  unsigned int *v19; // [rsp+10h] [rbp-18h]
  unsigned int v20; // [rsp+18h] [rbp-10h]
  int v21; // [rsp+1Ch] [rbp-Ch]
  __int64 v22; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    v21 = a6;
    v20 = a5;
    v19 = (unsigned int *)a3;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v18);
  }
  else if ( (a5 & 0x80000000) == 0 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    v9 = a5;
    v10 = (4LL * a5 + 19) & 0x7FFFFFFF8LL;
    if ( v10 >= 0x20000 || (a1 = v8 + v10, v8 + v10 > *(_QWORD *)(v7 + 32)) )
    {
      v22 = a5;
      v21 = a6;
      v20 = a5;
      v19 = (unsigned int *)a3;
      v8 = sub_181EAA840(a1, a2: v10, a3: 34084944, a4: 34084944, a5);
      v9 = v22;
      a6 = v21;
      a5 = v20;
      a3 = (unsigned __int64)v19;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = a1;
      *(_QWORD *)v8 = 34084944;
      *(_DWORD *)(v8 + 8) = a5;
      *(_DWORD *)(v8 + 12) = 0;
      if ( v10 - 16 >= 0x800 )
      {
        v22 = a5;
        v21 = a6;
        v20 = a5;
        v19 = (unsigned int *)a3;
        memset((void *)(v8 + 16), 0, v10 - 16);
        a1 = v8 + v10;
      }
      else
      {
        for ( i = 16; v10 > i; i += 8LL )
          *(_QWORD *)(v8 + i) = 0;
      }
    }
    *(_DWORD *)(a3 + 4) = (unsigned __int64)(v8 - v6) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v17 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) = 0;
    }
    v12 = *(_QWORD *)(v7 + 40);
    v13 = 34089600;
    v14 = (8 * v9 + 23) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v14 >= 0x20000 || (v10 = v12 + v14, v12 + v14 > *(_QWORD *)(v7 + 32)) )
    {
      v21 = a6;
      v20 = a5;
      v19 = (unsigned int *)a3;
      v12 = sub_181EAA840(a1, a2: v10, a3: 34089600, a4: 34089600, a5);
      a6 = v21;
      a5 = v20;
      a3 = (unsigned __int64)v19;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v10;
      *(_QWORD *)v12 = 34089600;
      *(_DWORD *)(v12 + 8) = a5;
      *(_DWORD *)(v12 + 12) = 0;
      if ( v14 - 16 >= 0x800 )
      {
        v21 = a6;
        v20 = a5;
        v19 = (unsigned int *)a3;
        memset((void *)(v12 + 16), 0, v14 - 16);
        a1 = v12 + v14;
        v13 = 0;
      }
      else
      {
        for ( j = 16; v14 > j; j += 8LL )
          *(_QWORD *)(v12 + j) = 0;
      }
    }
    *(_DWORD *)(a3 + 8) = (unsigned __int64)(v12 - v6) >> 3;
    result = *(unsigned int *)a3;
    if ( (result & 2) != 0 )
    {
      v13 = a3 & 0xFFFFFFFFFFF80000LL;
      result = (a3 - ((a3 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
        *(_BYTE *)(v13 + result + 56) = 0;
    }
    if ( a6 != 0 )
    {
      v21 = a6;
      v20 = a5;
      v19 = (unsigned int *)a3;
      result = sub_181EB3B40(a1, a2: v10, a3, a4: v13);
    }
    else
    {
      v21 = 0;
      v20 = a5;
      v19 = (unsigned int *)a3;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182770E80](a1, a2, a3: a5);
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
  return sub_181EB3A60();
}
