package Q37_LeHoangMinh1_4.Set;

public class Student implements Comparable<Student> {
    public String code;
    private String name;
    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;
        Student other = (Student) obj;
        if (code == null) {
            if (other.code != null)
                return false;
        } else if (!code.equals(other.code))
            return false;
        return true;
    }



    public Integer score;

    public Student(String code, String name, Integer score) {
        this.code = code;
        this.score = score;
        this.name = name;

    }

    public String getCode() {
        return code;
    }

    public void setCode(String code) {
        this.code = code;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Integer getScore() {
        return score;
    }

    public void setScore(Integer score) {
        this.score = score;
    }

    public String toString() {
        return "+ Code: " + code + ", name: " + name + ", score: " + score + "\n";
    }



    @Override
    public int compareTo(Student a) {
        return this.getCode().compareTo(a.getCode());
    }
}
