// sub_1932C8E00
// rva 0x132c8e00  size 80  section .text  group text
// window base 0x1932c8e00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C8E00(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v11; // r14
  int v12; // edx
  char v13; // bl
  int v14; // esi
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rdi
  __int64 v25; // rsi
  char v26; // di
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rsi
  int v33; // edx
  int v34; // ecx
  int v35; // edi
  int v36; // esi
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // [rsp+30h] [rbp+8h]

  if ( a3 == 0 )
  {
    LOBYTE(a4) = a5 != 0;
    return sub_1932C8F68(a1, a2, a3: 0, a4, a5, a6, a7);
  }
  if ( a3 != 1 )
  {
    if ( a3 != 2 )
    {
      if ( a3 != 3 )
        return 1;
      LOBYTE(result) = sub_1932C9510();
    }
    else
    {
      LOBYTE(result) = sub_1932C94E8();
    }
    return (unsigned __int8)result;
  }
  else
  {
    v39 = v7;
    v11 = a4;
    if ( (unsigned __int8)sub_1932C95CC(a1, a2: a5, a3: a5, a4: 0) == 0 )
      return 0;
    v13 = sub_1932C9460();
    LOBYTE(v17) = 1;
    if ( MEMORY[0x337DB0] != 0 )
    {
      sub_1932C9994(a1: v17, a2: v14, a3: v12, a4: 7, a5: v15, a6: v16);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_1932C8F68(a1: v35, a2: v36, a3: v33, a4: v34, a5: v37, a6: v38, a7: v39);
    }
    MEMORY[0x337DB0] = 1;
    if ( (unsigned __int8)sub_1932C94D0(a1: v17) != 0 )
    {
      sub_1932C9AE0(a1: v20, a2: v21, a3: v18, a4: v19, a5: v22, a6: v23);
      sub_1932C9948();
      sub_1932C9964();
      if ( (unsigned int)sub_1932CA28D(a1: v24, a2: v25, a3: 499112, a4: 499104) == 0
        && (unsigned __int8)sub_1932C949C() != 0 )
      {
        sub_1932CA287(a1: v20, a2: v21, a3: 499096, a4: 499080);
        MEMORY[0x337DB0] = 2;
        LOBYTE(v20) = 0;
      }
    }
    LOBYTE(v19) = v13;
    sub_1932C972C(a1: v20, a2: v21, a3: v18, a4: v19);
    if ( v26 != 0 )
      return 0;
    v27 = (_QWORD *)sub_1932C9980();
    if ( *v27 != 0 && (unsigned __int8)sub_1932C9694(a1: v29, a2: v30, a3: v28, a4: v27) != 0 )
      MEMORY[0x79D60](a1: v31, a2: v32, a3: 2, a4: v11, a5: v32);
    ++MEMORY[0x337838];
    return 1;
  }
}
